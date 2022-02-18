male(ram).
male(shyam).
female(sita).
female(gita).
parents(shyam, gita, ram).
parents(sita, gita, ram).

sister_of(X,Y):- female(X),parents(X, M, F),parents(Y, M, F).
