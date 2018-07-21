module test

import StdList
import ConvertReal

Start :: [(Real,Real)]
Start = map (\x -> (x, (bytesToReal (realTo32 x)))) numbers
where
	numbers = [3.14, 0.0, 1242.17429, 888888.599999,0.000000001123]
