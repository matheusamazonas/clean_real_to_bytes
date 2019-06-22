module test

import StdList
import ConvertReal

Start :: [(Real,Real)]
Start = map (\x -> (x, (bytesToReal32 (realToBytes32 x)))) numbers
	++  map (\x -> (x, (bytesToReal64 (realToBytes64 x)))) numbers
where
	numbers = [3.14, 0.0, 1242.17429, 888888.599999,0.000000001123]
