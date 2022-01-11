var
  a:array[1..1000] of longint;
  b,c,i,j,k,t,n,m:longint;
begin
  readln(m);
  for k:=1 to m do
  begin
    readln(n);
    t:=0; b:=0; c:=0;
    for i:= 1 to n do
    begin
      read(a[i]);
      t:=t+a[i];
      if a[i]>0 then b:=b+a[i];
      if a[i]<0 then c:=c-a[i];
    end;
    readln;
    if t=0 then writeln('NO') else
    if b>c then
    begin
      writeln('YES');
      for i:=1 to n do
      if a[i]>0 then write(a[i],' ');
      for i:=1 to n do
      if a[i]<=0 then write(a[i],' ');
      writeln;
    end else
    begin
      writeln('YES');
      for i:=1 to n do
      if a[i]<0 then write(a[i],' ');
      for i:=1 to n do
      if a[i]>=0 then write(a[i],' ');
      writeln;
    end;
  end;
end.
