# Specyfikacja
## Wejście:
* n ∈ N\\{0, 1} - liczba wyrazów w ciągu
* array[0...n-1] ∈ C - tablica z elementami ciągu

## Wyjście
 * Komunikat o tym, czy ciąg jest malejący lub nie.

# Lista kroków
1. **START**
2. prompt `size`
3. if `size<2` goto **2**
4. `i = 0`
5. if `i>=size` then goto **9**
6. prompt `array[i]`
7. `i++`
8. goto **5**
9. `i = 1`
10. if `i>=size` then goto **13**
11. if `array[i-1]<=array[i]` then goto **15**
12. `i++`
13. print `malejaca`
14. **KONIEC**
15. print `niemalejaca`
16. **KONIEC**

---

# 2.44
## Specyfikacja
### Wejście:
* n ∈ N\\{0, 1} - liczba wyrazów w ciągu
* array[0...n-1] ∈ R - tablica z  elementami ciągu

### Wyjście
 * Komunikat o tym, czy ciąg jest niemalejący lub malejacy.

## Schemat blokowy
![diagram.svg](http://svgur.com/i/1ay.svg)
