# Pirmoji-uzduotis versija 0.4

Sukurta programa turi galimybę generuoti pasirinkto dydžio failus su atsitiktiniais duomenimis. Versijoje 0.3 kaip dinaminė duomenų struktūra pagrinde buvo naudojama ***std::vector***. Šioje (0.4) versijoje pagrindinai naudojama dinaminė duomenų struktūra - ***std::list***. 

Vykdytas programos veikimo spartos matavimas abiejoms versijoms. Toliau galima matyti palygintus 0.3 versijos ir 0.4 versijos veikimo spartos matavimus. Iš jų galima pastebėti, jog su visais kiekiais duomenų tiek failų sukūrimas, tiek nuskaitymas užtruko šiek tiek mažiau laiko naudojant ***std::vector*** duomenų struktūrą. Vienintelė išmitis - itin didelis duomenų kiekis (10 mln. įrašų). Šio failo nuskaitymas naudojant ***std::list*** struktūrą buvo žymiai (maždaug 1.2 sekundės) spartesnis.

Testavimo sistemos parametrai: _CPU: 11th Gen Intel(R) Core(TM) i7-11370H @ 3.30GHz, 8gb RAM, SSD._

Failo iš 1000 įrašų generavimas:

v0.3:

![3_1000](https://user-images.githubusercontent.com/113666841/198523046-d99580bf-8df0-4144-b741-2cf3c14fc552.PNG)

v0.4:

![4_1000](https://user-images.githubusercontent.com/113666841/198523070-42930e42-2e87-4a9b-8107-be2e78ad9208.PNG)

Failo iš 10000 įrašų generavimas:

v0.3:

![3_10000](https://user-images.githubusercontent.com/113666841/198523177-785a4646-5a91-46b4-b61d-51e1e5d0a0da.PNG)

v0.4:

![4_10000](https://user-images.githubusercontent.com/113666841/198523204-ed6b813d-db25-418b-9486-2e489ee6b3ec.PNG)

Failo iš 100000 įrašų generavimas:

v0.3:

![3_100000](https://user-images.githubusercontent.com/113666841/198523230-6f7566e0-4294-4d72-abc7-992069add751.PNG)

v0.4:

![4_100000](https://user-images.githubusercontent.com/113666841/198523258-bd6ac98b-8854-454a-b8db-40b52dc18689.PNG)

Failo iš 1000000 įrašų generavimas:

v0.3:

![3_1000000](https://user-images.githubusercontent.com/113666841/198523317-1d48bdd5-c933-4d40-9451-0765d9daf90e.PNG)

v0.4:

![4_1000000](https://user-images.githubusercontent.com/113666841/198523343-3c466367-548a-4e64-b014-ca20ecc7292f.PNG)

Failo iš 10000000 įrašų generavimas:

v0.3:

![3_10000000](https://user-images.githubusercontent.com/113666841/198523363-48811110-58b2-4b9d-9f80-064b75b2b2de.PNG)

v0.4:

![4_10000000](https://user-images.githubusercontent.com/113666841/198523384-bfa72674-855a-49da-b37a-c94e3b03b8a0.PNG)

