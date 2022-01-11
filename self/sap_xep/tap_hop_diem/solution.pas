var
 ans,i,j,n,m,k,t:longint;
 a,b,x,w:array[0..211111]of longint;

procedure qs(l,r:longint);
var
 i,j,t,m:longint;
begin
 m:=a[l+random(r-l+1)];
 i:=l;j:=r;
 repeat
  while a[i]<m do inc(i);
  while a[j]>m do dec(j);
  if i>j then break;
  t:=a[i];a[i]:=a[j];a[j]:=t;
  t:=b[i];b[i]:=b[j];b[j]:=t;
  inc(i);dec(j);
 until i>j;
 if l<j then qs(l,j);
 if i<r then qs(i,r);
end;

begin
 readln(n);
 for i:=1 to n do
 begin
  readln(x[i],w[i]);
  a[i]:=x[i]+w[i];b[i]:=x[i]-w[i];
 end;
 qs(1,n);
 t:=1;ans:=1;
 for i:=2 to n do if b[i]>=a[t] then
 begin
  inc(ans);t:=i;
 end;
 writeln(ans);
end.
