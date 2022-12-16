# Antroji Užduotis

## Versija 1.1

Pirmojoje užduotyje sukurtoje programoje naudota **struct** duomenų struktūra pakeista į **class**. Atlikti pakeitimai visoje programoje, patobulintas ***user interface***'as.

Ivykdytas programos testas siekiant palyginti programos veikimą naudojant skirtingas duomenų struktūras: **struct** ir **class**.

Programa, naudojanti **struct**:

![image](https://user-images.githubusercontent.com/113666841/206664966-b054908a-7e53-4360-baec-042e806e4a66.png)

Programa, naudojanti **class**:

![image](https://user-images.githubusercontent.com/113666841/206665031-1a21391f-7246-4214-9a5b-9a5aede35545.png)

**class** duomenų tipą naudojanti programos versija visais atvejais veikia 2-3 kartus lėčiau, nei **struct** naudojusi versija.

Testavimo sistemos parametrai: _CPU: AMD Ryzen 9 3900X 12-Core Processor @3.80 GHz, 16gb RAM, 1TB SSD._


## Versija 1.2

***Studentas*** klasėje realizuota “Didžiojo trejeto” taisyklė (*"Rule of three"*): pridėtas destruktorius, kopijavimo konstruktorius ir priskyrimo kopijavimu operatorius. Taip pat perdengti įvesties ir išvesties operatoriai.

## Versija 1.5

Sukurta abstrakčioji bazinė klasė ***Zmogus***, kurios išvestine klase tapo klasė ***Studentas***.

## Versija 2.0

Sukurta programos dokumentacija naudojant ***Doxygen***. Norint pasiekti dokumentacijos puslapį, reikia paleisti ***html*** aplanke esantį ***index.html*** failą. Dokumentacijoje galima rasti klases, jų hierarchiją, klasėse apibrėžtų narių ir funkcijų sąrašus.

Programos veikimo instrukcija:

Programos funkcija pasirenkama įvedant programos meniu nurodytą ją atitinkantį skaičių:
- **(1) Programos spartos testas (list ir vector)** - vykdomas programos spartos testas naudojant 5 failus - *stud1000.txt, stud10000.txt, stud100000.txt, stud1000000.txt ir stud10000000.txt* bei 2 skirtingus konteinerius - ***std::list*** ir ***std::vector***, realizuotos dvi skirtingos strategijos - kuriant vieną naują konteinerį bei kuriant 2 naujus konteinerius.
- **(2) Programos spartos testas (tik vector)** - vykdomas programos spartos testas naudojant 2 failus - *stud10000.txt, stud100000.txt* bei 4 skirtingus algoritmus su ***std::vector*** konteineriu.
- **(3) Failo su atsitiktiniais duomenimis generavimas** - generuojamas pasirinkas skaičius failų su nurodytu skaičiumi studentų duomenų. Išvedami šabloniniai studentų duomenys (pvz. *Vardas1*, *Pavarde1*) su atsitiktinai generuotais pazymiais.
- **(4) Duomenu nuskaitymas is failo** - nuskaitomi duomenys iš nurodyto failo. Rezultatai išvedami ekrane, išdėliojami abecėlės tvarka pagal studento vardą.
- **(5) Duomenu ivedimas** - duomenu ivedimas ranka. Pasirenkama, koks skaičius studentų bus įvedamas. Ranka įvedamas vardas, pavardė ir egzamino balas, namų darbų pažymius galima pasirinktinai įvesti ranka arba generuoti atsitiktinai. Baigu įvedimą suskaičiuojami studentų galutiniai balai pasirinktinai pagal vidurkį arba medianą ir rezultatai išvedami ekrane.
- **(0) Baigti programos veikima**
