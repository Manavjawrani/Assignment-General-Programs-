myappend([],L2,L2).
myappend([H | T], L2, [H|Result]) :- myappend(T, L2, Result).