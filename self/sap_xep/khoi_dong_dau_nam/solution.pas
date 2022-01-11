var a:array[0..100000] of longint;
    n,i,d,t,j:longint;f,g:text;
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
      assign(f,'');reset(f);
      assign(g,'');rewrite(g);

      read(f,t);
      for i:= 1 to t do begin

        read(f,n,d);
        for j:=1 to n do
            read(f,a[j]);
        sort(1, n);

        if a[1]>d then writeln(g,'no')
        else if a[n]<=d then writeln(g,'yes')
        else if a[1]+a[2]<=d then writeln(g,'yes')
        else writeln(g,'no');
      end;
      close(f);
      close(g);
end.