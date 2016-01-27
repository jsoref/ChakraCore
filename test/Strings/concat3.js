//-------------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.txt file in the project root for full license information.
//-------------------------------------------------------------------------------------------------------

// Test out-of-memory limits for very long strings
try
{
  var longString = "A";
  for (var i = 0; i < 31; i++)
    longString += longString;

  WScript.Echo(longString);

  WScript.Echo("FAIL: Was expecting Out of Memory exception.");
}
catch (e)
{
  if(e.number == -2146828281) //Out of Memory
    WScript.Echo("PASS");
  else
    WScript.Echo("FAIL: Got the wrong exception code.");
}

//YUI issue with string builder
var a = {0:"foo",1:"bar"};
a.length = 2;
var ret = Array.prototype.join.call(a);
a[0]=ret;

Array.prototype.join.call(a);
WScript.Echo(ret);

//Strange repro based on Blue 46711(x64)
var arr = ["aa", "aa", "aa"];

for(var i = 0; i < 35; i++)
{
    arr.push(" ");
}
arr.push("");
arr.push("aa");
arr.join("");
//x86 version of above (different memory alignment)
var arr2 = ["aa", "aa", "aa"];

for(var j = 0; j < 39; j++)
{
    arr2.push(" ");
}
arr2.push("");
arr2.push("aa");
arr2.join("");
