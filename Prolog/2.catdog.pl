cat(fubby).          % fubby is a cat
black_spots(fubby).  % fubby has black spots
dog(figaro).         % figaro is a dog
white_spots(figaro). % figaro has white spots

owns(mary, Pet):- cat(Pet), black_spots(Pet). % mary owns a Pet if it is a cat and it has black spots
loves(Who, What):-owns(Who, What).            %If someone owns something, he loves it.



/*
?- listing(cat).
cat(fubby).
cat(coby).
true.
// list the all the clauses of predicates ‘cat.
?- listing(owns).
owns(mary, A) :- cat(A), black_spots(A).
true.
// list the all the clauses of predicates
‘owns’.
?- loves(Who, What). Who = mary,
What = fubby
// Who loves what?
?- owns(mary, _). true.

*/
