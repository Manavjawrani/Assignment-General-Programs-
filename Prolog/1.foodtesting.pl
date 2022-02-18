%facts
food(burger).	% burger is a food
food(sandwich).	%sandwich is a food
food(pizza).	%pizza is a food
lunch(sandwich).	%sandwich is a lunch
dinner(pizza).	%pizza is a dinner


%Rules	
meal(X) :- food(X).

%Every food is a meal OR Anything is a meal if it is a food


/*
test
1. is burgur food?                           ?-meal(buger).
2. is sandwich a meal?                       ?-meal(sandwich).
3. find a meal that is served for dinner.    ?-meal(X),dinner(X).
4. find all meals and dinner combinations    ?-meal(X),dinner(Y).
5. identify all kind of meals                ?- meal(What).
*/