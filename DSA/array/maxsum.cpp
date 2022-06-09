unordered_map<int,int>m;
      
      for(int i=0; i<size; i++){
          m[a[i]]++;
      }
      
      for(int i=0; i<size; i++){
          int value = m[a[i]];
          
          if(value > size/2){
              return a[i];
          }
      }
       return -1;