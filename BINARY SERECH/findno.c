  
int search(int a[] ,int size ,int key){
    int s = 0;
    int e = size - 1 ;
    int mid =  s+(e-s)/2;

    while (s<=e)
    {
         if (a[mid] == key)
         {
             return mid;
         }
         if (a[mid] > key)
         {
            e = mid - 1;
         }
         else
         {
            s = mid +1;
            
         }
          mid =  s+e/2;
 }
    return -1;
 }


 