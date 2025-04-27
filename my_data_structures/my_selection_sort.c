#include "types.h"

/*
===============================================================================================================
| Kriter                      | My Selection Sort                    | Best Selection Sort                    |
|-----------------------------|------------------------------------- |----------------------------------------|
| Sıralama işlevi             | ✅ Çalışıyor                         | ✅ Çalışıyor                          |
| Swap işlemi                 | ⚠️ Her küçük bulunca temp atanıyor   | ✅ Sadece finalde swap yapılıyor      |
| Kontrol mekanizması         | ✅ Minimum bulunuyor                 | ✅ Minimum bulunuyor                  |
| Döngü yapısı                | ✅ İki for döngüsü                   | ✅ İki for döngüsü                    |
| Gereksiz işlem (temp)       | ⚠️ İç döngüde gereksiz temp atanıyor | ✅ Gereksiz temp yok                  |
| Verimlilik                  | ⚠️ Biraz düşük                       | ✅ Daha verimli ve sade               |
===============================================================================================================
*/


/* @brief
 * Diziyi Selection Sort algoritması kullanarak küçükten büyüğe sıralar.
 * Selection Sort algoritması, her adımda dizinin kalan kısmındaki en küçük elemanı seçer
 * ve doğru pozisyona yerleştirir.Swap işlemi sadece bir kez yapılır(en küçük eleman bulunduğunda).
 * @param [UINT16 array] Sıralanacak tamsayı dizisi
 * @param [UINT16 n    ] Dizinin eleman sayısı
 */
void my_selection_sort(UINT16 array[], UINT16 n) 
{
    UINT16 i             = 0;
    UINT16 j             = 0;
    UINT16 temp_u16      = 0;
    UINT16 min_index_u16 = 0;
    UINT16 min_u16       = 0;

for(j = 0; j < n; j++)
{  
    min_u16       = array[j];

    for (i = j+1; i < n; i++)
    {
        if(array[i] < min_u16)
        {
            min_u16       = array[i];
            min_index_u16 = i;
            temp_u16      = array[j]; 
        }
    } 
    array[j]             = min_u16;
    array[min_index_u16] = temp_u16; 
}
}