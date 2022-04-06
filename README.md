# IgracTimUtakmica-PlayerTeamMatch
-------------
• *Igrač* se stvara zadatim imenom i celobrojnom vrednošću igrača (podrazumevano 1000) koja
može da se dohvati. Moguće je povećati ili smanjiti vrednost igrača za zadati procenat.
Moguće je uporediti dva igrača na jednakost (igrac1==igrac2). Igrači su jednaki ukoliko
su im svi atributi jednaki. Igrač se u izlazni tok ispisuje (it<<igrac) u obliku
ime#vrednost.

----------------------------------------------
• *Tim* se stvara zadatim nazivom i maksimalnim brojem igrača koje je moguće priključiti timu.
Pri stvaranju timu nije priključen nijedan igrač. Moguće je priključiti igrača na zadatu
celobrojnu poziciju u timu. Moguće je dohvatiti trenutni broj igrača u timu. Moguće je
dohvatiti (tim[i]) igrača sa zadate pozicije u timu. Moguće je dohvatiti vrednost tima kao
srednju vrednost svih priključenih igrača. Moguće je uporediti dva tima na jednakost
(tim1==tim2). Dva tima su jednaka ukoliko su im nazivi, maksimalan broj igrača i svi
priključeni igrači na odgovarajućim pozicijama jednaki. Tim se u izlazni tok ispisuje
(it<<tim) u formatu naziv[igrač1,igrač2,...].

---------------------------------------------
• *Privilegovani tim* se stvara sa dodatno zadatom minimalnom vrednošću igrača potrebnom da
se igrač priključi timu. Pri priključivanju igrača u privilegovani tim, greška je ukoliko je
vrednost igrača manja od minimalne vrednosti potrebne za priključenje timu. Pri ispisivanju
privilegovanog tima nakon naziva se dodatno ispisuje minimalna vrednost igrača potrebna da
se igrač priključi timu, unutar para običnih zagrada.

---------------------------------------------
• *Par* je uređen skup od dva pokazivača na podatke nekog tipa koji se zadaju pri stvaranju i mogu
pojedinačno da se dohvate i postave. Moguće je uporediti dva para istih tipova podataka
(par1==par2) tako što se upoređuju odgovarajući pokazivani podaci. Par se u izlazni tok
ispisuje (it<<par) u formatu [podatak1-podatak2].

---------------------------------------------
• *Meč* sadrži par timova (domaćin i gost) koji se zadaju pri stvaranju i ishod meča. Par timova
je moguće dohvatiti. Moguće je odigrati meč tako što se na osnovu vrednosti timova postavlja
ishod meča na jednu od sledećih vrednosti: POBEDA_DOMACIN, NERESENO, POBEDA_GOST.
Ukoliko postavljen ishod nije nerešen, svim igračima oba tima se ažuriraju vrednosti tako
što se igračima pobedničkog tima povećavaju, a igračima gubitničkog tima smanjuju vrednosti
za 10%. Moguće je proveriti da li je meč odigran. Moguće je dohvatiti par celobrojnih poena
koje su timovi osvojili na osnovu ishoda meča. Par treba formirati tako da je prvi podatak u
paru broj poena domaćina, a drugi podatak u paru broj poena gostujućeg tima. Tim koji je
pobedio osvaja 3 poena, tim koji je izgubio ne osvaja nijedan poen, dok za nerešen ishod oba
tima osvajaju po 1 poen. Greška je ukoliko meč nije odigran. Meč se u izlazni tok ispisuje
(it<<mec) tako što se ispisuje par timova, a zatim ishod meča, ukoliko je meč odigran.

---------------------------------------------
Napisati glavnu funkciju koja napravi nekoliko igrača, doda ih u timove, a potom napravi
nekoliko mečeva, odigra ih i ispiše ih.
