module test

import ConvertReal

Start :: [Real]
Start = [ 
	bytesToReal (realTo32 3.14),
	bytesToReal (realTo32 0.0),
	bytesToReal (realTo32 1242.17429),
	bytesToReal (realTo32 888888.599999),
	bytesToReal (realTo32 0.000000001123)
	]
