#include "types.h"

/*
===================================================================
| Özellik                   | Durum | Açıklama                    |
|---------------------------|-------|---------------------------- |
| Sıralama işlevi           | ✅    | Çalışıyor                   | 
| Swap işlemi               | ✅    | Doğru yapılıyor             | 
| Kontrol mekanizması       | ⚠️    | 2. tarama - optimize değil  |
| Döngü verimliliği         | ⚠️    | Gereksiz ek tarama          |
==================================================================
*/

void my_bubble_sort(UINT16 array[], UINT16 n) {
    
    UINT16 i = 0;   
    UINT16 j = 0;
    UINT8 ctrl = 0;
    UINT8 temp = 0;

    while(0 == ctrl)
    {
        for(int i = 0; i < n-1; i++)
        {
            if(array[i] > array[i+1])
            {
                temp     = array[i];
                array[i]  = array[i+1];
                array[i+1]= temp;
            }
        }
        
        for(int j = 0; j < n-1; j++)
        {
            if(array[j] > array[j+1])
            {
                ctrl = 0;
                break;
            }
            else
            {
                ctrl = 1;
            }
        }
    }

}