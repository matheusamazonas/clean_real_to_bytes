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

realToBytes64 :: !Real-> String
realToBytes64 _ = code {
		ccall doubleTobytes64 "I:S"
	}

bytesToReal64 :: !String -> Real
bytesToReal64 _ = code {
		ccall bytesToDouble64 "S:R"
	}

