from  random import sample
from sys import argv
arg = int(argv[1])
stack_a = []
stack_a = sample(range(arg), arg)
print(' '.join([str(i) for i in stack_a]))
#ARG=$(python3 ./algo_4.py); ./push_swap $ARG | ./checker $ARG
