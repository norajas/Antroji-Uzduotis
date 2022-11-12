# Pirmoji-uzduotis

## Versija 0.1

- Programa nuskaito vartotojo įvedamus duomenis apie studentą, apskaičiuoja jo galutinį balą. Programa turi galimybę vartotojui pasirinkus generuoti namų darbų pažymius atsitiktinai.
- Naudojamos bibliotekos bei namespace surašyti faile mano_lib.hpp.
- Programa turi du variantus: Masyvas.cpp - įvesti namų darbų pažymiai saugomi dinaminiame masyve, Vektorius.cpp - įvesti namų darbų pažymiai saugomi vektoriuje.

## Versija 0.2

- Pridėta galimybė duomenis apie studentus nuskaityti iš failo. Kode naudojamas duomenimis užpildytas failas kursiokai.txt;
- Visos funkcijos, išskyrus main sukeltos į atskirą failą - funkcijos.cpp.

## Versija 0.3

- Programa sukuria 5 failus su skirtingu skaičiumi (1000, 10000, 100000, 1000000, 10000000) studentų duomenų. Duomenys susideda iš šabloninio vardo ir pavardės (pvz. Vardas1 Pavarde1) ir 5 atsitiktinai sugeneruotų pažymių;
- Programa nuskaito duomenis iš failo, studentus išskirsto į 2 grupes (galutinis pažymys < 5.0 arba galutinis pažymys >= 5.0) ir jas išveda į 2 naujus skirtingus failus (moksliukai.txt - galutinis pažymys >= 5.0 ir nevykeliai.txt - galutinis pažymys < 5.0);
- Programa matuoja, kiek užtrunka kiekvienas šis žingsnis, ir rezultatą atspausdina ekrane.

![image](https://user-images.githubusercontent.com/113666841/201482817-11c4cc5a-ee9e-4a93-abf5-2738937bfb90.png)


## Versija 0.4

- Sukurta programa turi galimybę generuoti pasirinkto dydžio failus su atsitiktiniais duomenimis. 
- Versijoje 0.3 kaip dinaminė duomenų struktūra pagrinde buvo naudojama std::vector. Šioje (0.4) versijoje pridėta galimybė atlikti programos spartos testą naudojant skirtingas dinamines duomenų struktūras - std::list ir std::vector. 
- Spartos testas matuoja tik duomenų nuskaitymą iš failo ir išskirstymą į du naujus konteinerius pagal studento galutinį balą.

Toliau galima matyti palygintus veikimo spartos matavimus naudojant du skirtingus konteinerių tipus. Iš jų galima pastebėti, jog su visais kiekiais duomenų programa užtruko mažiau laiko naudojant ***std::vector*** duomenų struktūrą.

![image](https://user-images.githubusercontent.com/113666841/201480559-b3f4a684-32bd-4fcf-ab07-f536118a6cf9.png)

## Versija 1.0

### Programos naudojimo instrukcija

- Programa turi kelias funkcijas:
1. Spartos testas;
2. Spartos testas naudojant skirtingus algoritmus;
3. Naujų failų generavimas su atsitiktiniais duomenimis;
4. Duomenų nuskaitymas iš pasirinkto failo;
5. Atsitiktinis duomenų generavimas;
6. Duomenų įvedimas ranka.
- Norima funkcija pasirenkama atsakant į ekrane pasirodančius klausimus;
- Jei klausime yra pasirinkimas *(T/N)*, tai čia *'t'*/*'T'* - Taip, *'n'*/*'N'* - Ne. Jei yra pasirinkimas *(V/M)*, tai čia *'v'*/*'V'* - Vidurkis, *'m'*/*'M'* - Mediana;
- Pasirinkus funkciją generuoti failus, reikia įrašyti generuojamo failo duomenų eilučių skaičių;
- Pasirinkus funkciją nuskaityti duomenis iš failo, reikia įvesti pilną failo pavadinimą;
- Pasirinkus duomenis generuoti atsitiktinai arba įvesti ranka, reikia įvesti studentų skaičių;
- Pasirinkus duomenis įvesti rankiniu būdu, galima rinktis, ar galutinį balą išvesti pagal vidurkį, ar pagal medianą;
- Nuskaitant duomenis iš pasirinkto failo, juos generuojant arba įrašant ranka rezulatai spausdinami ekrane. Kitais atvejais rezultatai išvedami į naujus failus.

### Programos spartos testas

Programos spartos testas naudojant skirtingas studentų dalijimo į dvi kategorijas strategijas - kuriant tik vieną naują konteinerį **n** ir į jį sukeliant duomenis studentų, kurių galutinis balas mažesnis už 5.0, o kitus paliekant konteineryje **stud**, arba kuriant du naujus konteinerius. 

Abiejoms strategijoms naudoti algoritmai: 
1. ***std::sort*** - duomenys vektoriuje išdėstomi didėjimo tvarka pagal galutinį balą;
2. ***std::find_if*** - randamas pirmas elementas vektoriuje, kurio galutinis balas lygus 5.0;
3. ***std::move*** - į naują vektorių sukeliami elementai iki to, kurio galutinis balas lygus 5.0. Antroje strategijoje elementai, esantys po rasto elemento taip pat sukeliami į naują konteinerį;
4. Pirmoje strategijoje naudotas ***std::erase*** - iš pirmojo konteinerio ištrinami elementai, perkelti į naują konteinerį.

Taip pat vykdytas programos spartos testas naudojant tik ***std::vector*** konteinerio tipą, tačiau jam taikant skirtingus algoritmus:
1. Toks pat algoritmas, kaip atliekant spartos testą sukuriant tik vieną naują konteinerį;
2. Dalis duomenų sukeliami į naują konteinerį naudojant ***std::stable_partition*** ir ***std::copy*** algoritmus. Į naują vektorių sukelti duomenys iš senojo pašalinami naudojant ***std::erase*** algoritmą;
3. Toks pat algoritmas, kaip atliekant spartos testą sukuriant du naujus konteinerius;
4. Duomenys išskirstomi į du naujus vektorius naudojant ***std::partition_copy*** algoritmą.

![image](https://user-images.githubusercontent.com/113666841/201477990-5e914d55-282d-4a13-bca1-5a5bd3f027b3.png)

Iš spartos testo galime pastebėti, jog visais atvejais programa veikia greičiau panaudojant ***std::vector*** tipo konteinerį. Taip pat matome, jog su abejais konteinerių tipais programa veikia greičiau, kai yra kuriamas tik vienas naujas konteineris.

Antrasis programos spartos testas parodo, jog tiek ***std::stable_partition*** ir ***std::copy***, tiek ***std::partition_copy*** algoritmų pritaikymas yra gerokai efektyvesnis už algoritmus, naudotus pirmame spartos teste. Taip pat įdomu, jog naudojant ***std::partition_copy*** programa veikia greičiausiai, nors yra kuriami du nauji konteineriai.

Testavimo sistemos parametrai: _CPU: AMD Ryzen 9 3900X 12-Core Processor @3.80 GHz, 16gb RAM, SSD._
