implementation module ConvertReal

import code from "convert_real."

realTo32 :: !Real-> String
realTo32 _ = code {
		ccall doubleTo4bytes "I:S"
	}

bytesToReal :: !String -> Real
bytesToReal _ = code {
		ccall bytesToDouble "S:R"
	}

