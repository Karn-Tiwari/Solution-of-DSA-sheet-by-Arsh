 sort(arr, arr+l);
    int i=0, j=1;
    while(i<l && j<l)
    {
        if( (i!=j)&&((arr[j]-arr[i])==n))
            return true;
        else if((arr[j]-arr[i])>n)
            i++;
        else
            j++;
    }
    return false;