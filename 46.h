# Vatera – Termékfeltöltő UI (v1) – Elkészült funkciók

## Áttekintés
A Dokan-alapú termékfeltöltő felület (Watera dashboard) első, működő verziója elkészült.  
A fejlesztés az Aukro.hu mintáját követte, kiegészítve saját szegmens (Junk / Gallery) és szállítási beállításokkal.

Elérhetőség:  
http://81.0.106.236/dashboard/products/

---

## Elkészült funkciók

### 1. Alap UI / Layout
- A Dokan feltöltő oldal új, strukturált elrendezést kapott.  
- Az **Aukció / Vásárlás most** TAB-választó vizuálisan és funkcionálisan is megjelenik (alapértelmezés: Vásárlás most).  
- A termékadatok (név, rövid és hosszú leírás, kategória, márka, tag-ek, vizuális kód) mezők új elrendezésben láthatók.  
- A leírás mezők mellett megjelent a **„Tartalom generálása MI-vel”** funkció – ez a ChatGPT API-integrációhoz csatlakozik.

### 2. Szegmens és termékbesorolás
- A feltöltő oldalon külön szekcióban választható a termék típusa: **Junk / Aukció / Vásárlás most**.  
- A választás alapján a további mezők dinamikusan módosulnak (ár, időtartam, automatikus hosszabbítás stb.).  

### 3. Aukciós beállítások (elő-előkészítés)
- Kikiáltási ár, időtartam és automatikus hosszabbítás mezők már megjelennek a formon.  
- Az aukciós logika még inaktív, de az UI elő van készítve.

### 4. Szállítási rész
- Külön blokkban megjelentek a szállítási opciók:
  - **Normál méretű csomag / Oversized csomag**
  - **Személyes átvétel** opció irányítószám + város mezővel
- A szállítási választás alapot teremt a későbbi GLS / MPL / Packeta integrációhoz.
- A buyer protection logika UI-ban már különíthető (Vaterás szállítás előkészítve).

### 5. Mentés és működés
- „Save Product” gomb működik, a meta-adatok mentése már él (segment + szállítási paraméterek).  
- A teljes UI Dokan plugin alatt fut, kompatibilis a WooCommerce termékstruktúrával.

---

## Következő fejlesztési kör (v2)
- Frontend finomhangolás, reszponzív nézetek

## Következő fejlesztési kör (v3)
- Aukciós logika bekötése (kikiáltási ár → licitkezelés)
- Szállítási módok API-integráció (Vaterafutár / GLS / MPL / Packeta)
- Buyer protection logika (vásárlói státusz + escrow)
