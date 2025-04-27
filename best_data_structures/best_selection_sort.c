void best_selection_sort(int array[], int n) 
{
    int i, j, min_index, temp;

    for (i = 0; i < n - 1; i++) 
    {
        min_index = i; 

        for (j = i + 1; j < n; j++) 
        {
            if (array[j] < array[min_index]) 
            {
                min_index = j;
            }
        }
        
        if (min_index != i) 
        {
            temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;
        }
    }
}
