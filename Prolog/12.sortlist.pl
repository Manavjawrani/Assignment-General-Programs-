sorted([_]).        % singleton is sorted
sorted([A, B | T]) :- A =< B, sorted([B | T]).
