var f1,f2:text;
    a:array[0..1000000] of longint;
    i,n,v:longint;
    s,d,k:int64;
      procedure sort(l,r: longint);
      var
         i,j,x,y: longint;
      begin
         i:=l;
         j:=r;
         x:=a[(l+r) div 2];
         repeat
           while a[i]<x do
            inc(i);
           while x<a[j] do
            dec(j);
           if not(i>j) then
             begin
                y:=a[i];
                a[i]:=a[j];
                a[j]:=y;
                inc(i);
                j:=j-1;
             end;
         until i>j;
         if l<j then
           sort(l,j);
         if i<r then
           sort(i,r);
      end;
        begin
                assign(f1,'');
                reset(f1);
                assign(f2,'');
                rewrite(f2);
                readln(f1,n,k);
                for i:=1 to n do
                read(f1,a[i]);
                sort(1,n);
                v:=n div 2+1; s:=1; d:=a[v];
                while (k>0) and (v<n) do
                begin
                    if k>=s*(a[v+1]-d) then
                    begin
                        k:=k-s*(a[v+1]-d);
                        d:=a[v+1];
                        inc(v);
                        inc(s);
                    end else begin d:=d+k div s; k:=0; end;
                end;
                if k>0 then d:=d+k div s;
                writeln(f2,d);
                close(f1);
                close(f2);
        end.