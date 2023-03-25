import os

# Hyperparameters
N_BLOCKS = 10
N_LABELS = 10
ITER = 100000


# Create the branch_misprediction_goto.c file according to defined hyperparameters

with open(os.path.join("benchmarks/branch/branch_misprediction_goto.c"), "w") as f:
    string = "int main() { unsigned int rand = 11; int x; void "

    for i in range(N_BLOCKS):
        string += f"*label_group_{i}[{N_LABELS}], "

    string = string[:-2] + ";\n\n"

    for i in range(N_BLOCKS):
        for j in range(N_LABELS):
            string += f"label_group_{i}[{j}] = &&l_{i}_{j};\n"

        string += "\n\n"

    string += f"for (int i = 0; i < {ITER}; i++){{"

    for i in range(N_BLOCKS):
        string += "//////////// BASIC BLOCK START ///////////\n\n"
        string += "rand ^= rand << 13;rand ^= rand >> 17; rand ^= rand << 5;\n\n"

        string += f"goto *label_group_{i}[rand % {N_LABELS}];\n\n"
        for j in range(N_LABELS):
            string += f"l_{i}_{j}: x = {j};"

        string += "\n//////////////////////////////////////////\n\n"

    string += "}}"

    f.write(string)
