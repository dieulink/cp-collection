var a,b:array[1..200] of integer;
    s1,s2,s3:string;
    i,f:integer;
begin
readln(s1);
readln(s2);
readln(s3);
for i:=1 to 200 do
 begin
  a[i]:=0;
  b[i]:=0;
 end;
for i:=1 to length(s1) do
 inc(a[ord(s1[i])]);
for i:=1 to length(s2) do
 inc(a[ord(s2[i])]);
for i:=1 to length(s3) do
 inc(b[ord(s3[i])]);
f:=1;
for i:=1 to 200 do
if a[i]<>b[i] then begin
                    f:=0;
                    break;
                   end;
if f=1 then writeln('YES')
       else writeln('NO');

end.