# Pirmoji-uzduotis versija 0.4

Sukurta programa turi galimybę generuoti pasirinkto dydžio failus su atsitiktiniais duomenimis. Versijoje 0.3 kaip dinaminė duomenų struktūra pagrinde buvo naudojama ***std::vector***. Šioje (0.4) versijoje pridėta galimybė atlikti programos spartos testą naudojant skirtingas dinamines duomenų struktūras - ***std::list*** ir ***std::vector***. Spartos testas matuoja tik duomenų nuskaitymą iš failo ir išskirstymą į du naujus konteinerius pagal studento galutinį balą.

Toliau galima matyti palygintus veikimo spartos matavimus naudojant du skirtingus konteinerių tipus. Iš jų galima pastebėti, jog su visais kiekiais duomenų programa užtruko mažiau laiko naudojant ***std::vector*** duomenų struktūrą.

Testavimo sistemos parametrai: _CPU: AMD Ryzen 9 3900X 12-Core Processor @3.80 GHz, 16gb RAM, SSD._

![image](https://user-images.githubusercontent.com/113666841/201480559-b3f4a684-32bd-4fcf-ab07-f536118a6cf9.png)
