# My programming language DVR-2020
Full [documentation](/DVR2020.docx).
### An example of a program in the programming language DVR-2020.
```
posint func print (string str, posint count)
{
   $ posint i;
   i = 0;
   puts #InPrint#;
   until (i < count)
      puts str;
      i = i + 1;
   loop;
   ret i;
};

posint func makeCoef (posint x, posint y)
{
   $ posint result;
   result = x + y;
   ret result;
};

posint func makeCompute (posint x, posint y, posint z)
{
   $ posint result;
   result = 0;
   result = ((x + y + z) / z) * makeCoef(x, y);
   ret result;
};

go
{
   $ string str;
   $ posint result;
   $ posint x;
   $ posint y;
   str = #cycle#; x = 3; y = 4; result = 0;
   result = makeCompute(x, y, 2);
   x = print(str, 5);
   puts #Result:#;
   puts result;
   ret 0;
};

```

