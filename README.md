# gem5-benchmarks
Designed benchmarks for the course of High Performance Computing Architectures

## Useful commands

`aarch64-linux-gnu-gcc -static benchmarks/baseline.c`

`../gem5/build/ARM/gem5.opt config_files/two_level_ooo.py a.out`

## Notes

### Baseline

1. Tried NOPS and other similar instructions -> Removed by the compiler