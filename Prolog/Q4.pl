max2([R], R).
max2([X|Xs], R):- max2(Xs, T), (X > T -> R = X ; R = T).