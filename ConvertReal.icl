implementation module ConvertReal

import code from "convert_real."

realTo32 :: !Real-> String
realTo32 _ = code {
		ccall doubleTobytes32 "I:S"
	}

bytesToReal :: !String -> Real
bytesToReal _ = code {
		ccall bytesToDouble32 "S:R"
	}

