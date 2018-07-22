implementation module ConvertReal

import code from "convert_real."

realToBytes32 :: !Real-> String
realToBytes32 _ = code {
		ccall doubleTobytes32 "I:S"
	}

bytesToReal32 :: !String -> Real
bytesToReal32 _ = code {
		ccall bytesToDouble32 "S:R"
	}

