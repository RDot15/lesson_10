
 void drop_space(int size, char *line)
 
{
    int i = 0, j;
    char k;
        while (i < size)
        {
            while (line[i] == ' ')
                i++;
            j = i + 1;
            
            while (line[j] == ' ')
                j++;

            if (j >= size) 
                break;

            k = line[i]; 
            line[i] = line[j];
            line[j] = k;
 
            i = j + 1; 
 }
}
