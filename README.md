# Pirmoji-uzduotis versija 0.4

Sukurta programa turi galimybę generuoti pasirinkto dydžio failus su atsitiktiniais duomenimis. Versijoje 0.3 kaip dinaminė duomenų struktūra pagrinde buvo naudojama ***std::vector***. Šioje (0.4) versijoje pagrindinai naudojama dinaminė duomenų struktūra - ***std::list***. 

Vykdytas programos veikimo spartos matavimas abiejoms versijoms. Toliau galima matyti palygintus 0.3 versijos ir 0.4 versijos veikimo spartos matavimus. Iš jų galima pastebėti, jog su visais kiekiais duomenų tiek failų sukūrimas, tiek nuskaitymas užtruko šiek tiek mažiau laiko naudojant ***std::vector*** duomenų struktūrą. Vienintelė išmitis - itin didelis duomenų kiekis (10 mln. įrašų). Šio failo nuskaitymas naudojant ***std::list*** struktūrą buvo žymiai (maždaug 1.2 sekundės) spartesnis.

Testavimo sistemos parametrai: _CPU: 11th Gen Intel(R) Core(TM) i7-11370H @ 3.30GHz, 8gb RAM, SSD._

Programos spartos testas naudojant skirtingas studentų dalijimo į dvi kategorijas strategijas - kuriant tik vieną naują konteinerį **n** ir į jį sukeliant duomenis studentų, kurių galutinis balas mažesnis už 5.0, o kitus paliekant konteineryje **stud**, arba kuriant du naujus konteinerius. 

Abiejoms strategijoms naudoti algoritmai: 
1. ***std::sort*** - duomenys vektoriuje išdėstomi didėjimo tvarka pagal galutinį balą;
2. ***std::find_if*** - randamas pirmas elementas vektoriuje, kurio galutinis balas lygus 5.0;
3. ***std::move*** - į naują vektorių sukeliami elementai iki to, kurio galutinis balas lygus 5.0. Antroje strategijoje elementai, esantys po rasto elemento taip pat sukeliami į naują konteinerį;
4. Pirmoje strategijoje naudotas ***std::erase*** - iš pirmojo konteinerio ištrinami elementai, perkelti į naują konteinerį.

![image](https://user-images.githubusercontent.com/113666841/201387202-cd56803d-ffe9-44be-9ff5-cfd0302dca4d.png)

Iš spartos testo galime pastebėti, jog visais atvejais programa veikia greičiau panaudojant ***std::vector*** tipo konteinerį. Taip pat matome, jog su abejais konteinerių tipais programa veikia greičiau, kai yra kuriamas tik vienas naujas konteineris.
