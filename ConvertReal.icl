implementation module ConvertReal

import code from "convert."

realTo32 :: !Real-> String
realTo32 _ = code {
		ccall doubleTo4bytes "I:S"
	}

