void adyac(int *arr, int n)
{
    for(int i=0; i<n; i++)
    {
        if(*(arr+i)+1 == *(arr+i+1) && *(arr+i+1)+1 == *(arr+i+2))
        {
            printf("\n\n\ %d, %d y %d ",*(arr+i), *(arr+i+1), *(arr+i+2));
        }
    }
}
