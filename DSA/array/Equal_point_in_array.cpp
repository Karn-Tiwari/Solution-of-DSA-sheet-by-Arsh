

  long sumLeft = 0 ;
       long sum =0;
       
       for(int i=0; i<n; i++){
           
           sum+=arr[i];
           
       }
       
       for(int i=0; i<n; i++){
           
           sumLeft = sumLeft + arr[i];
           
           if(sumLeft-arr[i]==sum-sumLeft) return i+1;
       }
       
       return -1;
   }//Equal point in an array......