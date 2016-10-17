-module(factorial).
-export([first_factorial/1]).
-export([second_factorial/1]).

first_factorial(0) -> 1;
first_factorial(N) -> N * first_factorial(N-1).

second_factorial(0) -> 1;
second_factorial(1) -> 1;
second_factorial(N) -> second_factorial(N - 1) + second_factorial(N - 2).
