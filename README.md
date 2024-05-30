    Programul scris în C,cat si in pseudocod este destinat pentru a ajuta un pescar să decidă ce homari să captureze pentru a maximiza valoarea totală a capturii sale fără a depăși capacitatea plasei. Iată pașii pentru utilizarea programului:
•	Structura Homar:
Definirea unei structuri care conține două câmpuri: dimensiune și valoare.
•	Funcția citire:
Citește numărul de homari n.
Alocă memorie pentru un array de n structuri Homar.
Pentru fiecare homar, citește dimensiunea și valoarea acestuia.
Citește capacitatea plasei.
•	Funcția afisare:
Afișează valoarea maximă ce poate fi obținută în funcție de intrările date.
•	Funcția ValoareMaxima:
Caz de bază: Dacă numărul de homari este 0 sau capacitatea este 0, returnează 0.
Exclude homarul curent: Dacă dimensiunea homarului curent este mai mare decât capacitatea, exclude acest homar și calculează valoarea maximă pentru restul homarilor.
Include homarul curent: Calculează valoarea maximă inclusiv homarul curent și excluzând homarul curent, returnând valoarea maximă dintre cele două opțiuni.
•	Funcția main:
Declară variabilele n, capacitate și homari.
Apelează funcția citire pentru a citi datele de intrare.
Calculează valoarea maximă apelând funcția ValoareMaxima.
Afișează valoarea maximă obținută apelând funcția afisare.
Eliberează memoria alocată pentru array-ul homari.
