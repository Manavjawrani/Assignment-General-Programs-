mymember(Find,[]):-write('not found').
mymember(Find,[Find | T]).
mymember(Find, [ H | T]):-mymember(Find, T).


%with Anynomous variables
%mymember(_,[]):-write('not found').
%mymember(Find,[Find | _]).
%mymember(Find, [ _ | T]):-mymember(Find, T).

