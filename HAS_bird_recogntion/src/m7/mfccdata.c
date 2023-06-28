#include "mfccdata.h"


const float32_t mfcc_dct_coefs_config1_f32[NB_MFCC_DCT_COEFS_CONFIG1_F32]={
	0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,
	0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,
	0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,
	0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,
	0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204124f,0.204015f,0.203141f,
	0.201398f,0.198792f,0.195335f,0.191041f,0.185929f,0.180021f,0.173343f,0.165922f,0.157790f,0.148983f,
	0.139538f,0.129495f,0.118898f,0.107791f,0.096223f,0.084243f,0.071903f,0.059254f,0.046352f,0.033251f,
	0.020008f,0.006679f,-0.006679f,-0.020008f,-0.033251f,-0.046352f,-0.059254f,-0.071903f,-0.084243f,-0.096223f,
	-0.107791f,-0.118898f,-0.129495f,-0.139538f,-0.148983f,-0.157790f,-0.165922f,-0.173343f,-0.180021f,-0.185929f,
	-0.191041f,-0.195335f,-0.198792f,-0.201398f,-0.203141f,-0.204015f,0.203687f,0.200202f,0.193291f,0.183073f,
	0.169723f,0.153469f,0.134588f,0.113405f,0.090282f,0.065614f,0.039823f,0.013350f,-0.013350f,-0.039823f,
	-0.065614f,-0.090282f,-0.113405f,-0.134588f,-0.153469f,-0.169723f,-0.183073f,-0.193291f,-0.200202f,-0.203687f,
	-0.203687f,-0.200202f,-0.193291f,-0.183073f,-0.169723f,-0.153469f,-0.134588f,-0.113405f,-0.090282f,-0.065614f,
	-0.039823f,-0.013350f,0.013350f,0.039823f,0.065614f,0.090282f,0.113405f,0.134588f,0.153469f,0.169723f,
	0.183073f,0.193291f,0.200202f,0.203687f,0.203141f,0.195335f,0.180021f,0.157790f,0.129495f,0.096223f,
	0.059254f,0.020008f,-0.020008f,-0.059254f,-0.096223f,-0.129495f,-0.157790f,-0.180021f,-0.195335f,-0.203141f,
	-0.203141f,-0.195335f,-0.180021f,-0.157790f,-0.129495f,-0.096223f,-0.059254f,-0.020008f,0.020008f,0.059254f,
	0.096223f,0.129495f,0.157790f,0.180021f,0.195335f,0.203141f,0.203141f,0.195335f,0.180021f,0.157790f,
	0.129495f,0.096223f,0.059254f,0.020008f,-0.020008f,-0.059254f,-0.096223f,-0.129495f,-0.157790f,-0.180021f,
	-0.195335f,-0.203141f,0.202378f,0.188586f,0.161943f,0.124263f,0.078115f,0.026644f,-0.026644f,-0.078115f,
	-0.124263f,-0.161943f,-0.188586f,-0.202378f,-0.202378f,-0.188586f,-0.161943f,-0.124263f,-0.078115f,-0.026644f,
	0.026644f,0.078115f,0.124263f,0.161943f,0.188586f,0.202378f,0.202378f,0.188586f,0.161943f,0.124263f,
	0.078115f,0.026644f,-0.026644f,-0.078115f,-0.124263f,-0.161943f,-0.188586f,-0.202378f,-0.202378f,-0.188586f,
	-0.161943f,-0.124263f,-0.078115f,-0.026644f,0.026644f,0.078115f,0.124263f,0.161943f,0.188586f,0.202378f,
	0.201398f,0.180021f,0.139538f,0.084243f,0.020008f,-0.046352f,-0.107791f,-0.157790f,-0.191041f,-0.204015f,
	-0.195335f,-0.165922f,-0.118898f,-0.059254f,0.006679f,0.071903f,0.129495f,0.173343f,0.198792f,0.203141f,
	0.185929f,0.148983f,0.096223f,0.033251f,-0.033251f,-0.096223f,-0.148983f,-0.185929f,-0.203141f,-0.198792f,
	-0.173343f,-0.129495f,-0.071903f,-0.006679f,0.059254f,0.118898f,0.165922f,0.195335f,0.204015f,0.191041f,
	0.157790f,0.107791f,0.046352f,-0.020008f,-0.084243f,-0.139538f,-0.180021f,-0.201398f,0.200202f,0.169723f,
	0.113405f,0.039823f,-0.039823f,-0.113405f,-0.169723f,-0.200202f,-0.200202f,-0.169723f,-0.113405f,-0.039823f,
	0.039823f,0.113405f,0.169723f,0.200202f,0.200202f,0.169723f,0.113405f,0.039823f,-0.039823f,-0.113405f,
	-0.169723f,-0.200202f,-0.200202f,-0.169723f,-0.113405f,-0.039823f,0.039823f,0.113405f,0.169723f,0.200202f,
	0.200202f,0.169723f,0.113405f,0.039823f,-0.039823f,-0.113405f,-0.169723f,-0.200202f,-0.200202f,-0.169723f,
	-0.113405f,-0.039823f,0.039823f,0.113405f,0.169723f,0.200202f,0.198792f,0.157790f,0.084243f,-0.006679f,
	-0.096223f,-0.165922f,-0.201398f,-0.195335f,-0.148983f,-0.071903f,0.020008f,0.107791f,0.173343f,0.203141f,
	0.191041f,0.139538f,0.059254f,-0.033251f,-0.118898f,-0.180021f,-0.204015f,-0.185929f,-0.129495f,-0.046352f,
	0.046352f,0.129495f,0.185929f,0.204015f,0.180021f,0.118898f,0.033251f,-0.059254f,-0.139538f,-0.191041f,
	-0.203141f,-0.173343f,-0.107791f,-0.020008f,0.071903f,0.148983f,0.195335f,0.201398f,0.165922f,0.096223f,
	0.006679f,-0.084243f,-0.157790f,-0.198792f,0.197169f,0.144338f,0.052831f,-0.052831f,-0.144338f,-0.197169f,
	-0.197169f,-0.144338f,-0.052831f,0.052831f,0.144338f,0.197169f,0.197169f,0.144338f,0.052831f,-0.052831f,
	-0.144338f,-0.197169f,-0.197169f,-0.144338f,-0.052831f,0.052831f,0.144338f,0.197169f,0.197169f,0.144338f,
	0.052831f,-0.052831f,-0.144338f,-0.197169f,-0.197169f,-0.144338f,-0.052831f,0.052831f,0.144338f,0.197169f,
	0.197169f,0.144338f,0.052831f,-0.052831f,-0.144338f,-0.197169f,-0.197169f,-0.144338f,-0.052831f,0.052831f,
	0.144338f,0.197169f,0.195335f,0.129495f,0.020008f,-0.096223f,-0.180021f,-0.203141f,-0.157790f,-0.059254f,
	0.059254f,0.157790f,0.203141f,0.180021f,0.096223f,-0.020008f,-0.129495f,-0.195335f,-0.195335f,-0.129495f,
	-0.020008f,0.096223f,0.180021f,0.203141f,0.157790f,0.059254f,-0.059254f,-0.157790f,-0.203141f,-0.180021f,
	-0.096223f,0.020008f,0.129495f,0.195335f,0.195335f,0.129495f,0.020008f,-0.096223f,-0.180021f,-0.203141f,
	-0.157790f,-0.059254f,0.059254f,0.157790f,0.203141f,0.180021f,0.096223f,-0.020008f,-0.129495f,-0.195335f,
	0.193291f,0.113405f,-0.013350f,-0.134588f,-0.200202f,-0.183073f,-0.090282f,0.039823f,0.153469f,0.203687f,
	0.169723f,0.065614f,-0.065614f,-0.169723f,-0.203687f,-0.153469f,-0.039823f,0.090282f,0.183073f,0.200202f,
	0.134588f,0.013350f,-0.113405f,-0.193291f,-0.193291f,-0.113405f,0.013350f,0.134588f,0.200202f,0.183073f,
	0.090282f,-0.039823f,-0.153469f,-0.203687f,-0.169723f,-0.065614f,0.065614f,0.169723f,0.203687f,0.153469f,
	0.039823f,-0.090282f,-0.183073f,-0.200202f,-0.134588f,-0.013350f,0.113405f,0.193291f,0.191041f,0.096223f,
	-0.046352f,-0.165922f,-0.203141f,-0.139538f,-0.006679f,0.129495f,0.201398f,0.173343f,0.059254f,-0.084243f,
	-0.185929f,-0.195335f,-0.107791f,0.033251f,0.157790f,0.204015f,0.148983f,0.020008f,-0.118898f,-0.198792f,
	-0.180021f,-0.071903f,0.071903f,0.180021f,0.198792f,0.118898f,-0.020008f,-0.148983f,-0.204015f,-0.157790f,
	-0.033251f,0.107791f,0.195335f,0.185929f,0.084243f,-0.059254f,-0.173343f,-0.201398f,-0.129495f,0.006679f,
	0.139538f,0.203141f,0.165922f,0.046352f,-0.096223f,-0.191041f,0.188586f,0.078115f,-0.078115f,-0.188586f,
	-0.188586f,-0.078115f,0.078115f,0.188586f,0.188586f,0.078115f,-0.078115f,-0.188586f,-0.188586f,-0.078115f,
	0.078115f,0.188586f,0.188586f,0.078115f,-0.078115f,-0.188586f,-0.188586f,-0.078115f,0.078115f,0.188586f,
	0.188586f,0.078115f,-0.078115f,-0.188586f,-0.188586f,-0.078115f,0.078115f,0.188586f,0.188586f,0.078115f,
	-0.078115f,-0.188586f,-0.188586f,-0.078115f,0.078115f,0.188586f,0.188586f,0.078115f,-0.078115f,-0.188586f,
	-0.188586f,-0.078115f,0.078115f,0.188586f,0.185929f,0.059254f,-0.107791f,-0.201398f,-0.157790f,-0.006679f,
	0.148983f,0.203141f,0.118898f,-0.046352f,-0.180021f,-0.191041f,-0.071903f,0.096223f,0.198792f,0.165922f,
	0.020008f,-0.139538f,-0.204015f,-0.129495f,0.033251f,0.173343f,0.195335f,0.084243f,-0.084243f,-0.195335f,
	-0.173343f,-0.033251f,0.129495f,0.204015f,0.139538f,-0.020008f,-0.165922f,-0.198792f,-0.096223f,0.071903f,
	0.191041f,0.180021f,0.046352f,-0.118898f,-0.203141f,-0.148983f,0.006679f,0.157790f,0.201398f,0.107791f,
	-0.059254f,-0.185929f,0.183073f,0.039823f,-0.134588f,-0.203687f,-0.113405f,0.065614f,0.193291f,0.169723f,
	0.013350f,-0.153469f,-0.200202f,-0.090282f,0.090282f,0.200202f,0.153469f,-0.013350f,-0.169723f,-0.193291f,
	-0.065614f,0.113405f,0.203687f,0.134588f,-0.039823f,-0.183073f,-0.183073f,-0.039823f,0.134588f,0.203687f,
	0.113405f,-0.065614f,-0.193291f,-0.169723f,-0.013350f,0.153469f,0.200202f,0.090282f,-0.090282f,-0.200202f,
	-0.153469f,0.013350f,0.169723f,0.193291f,0.065614f,-0.113405f,-0.203687f,-0.134588f,0.039823f,0.183073f,
	0.180021f,0.020008f,-0.157790f,-0.195335f,-0.059254f,0.129495f,0.203141f,0.096223f,-0.096223f,-0.203141f,
	-0.129495f,0.059254f,0.195335f,0.157790f,-0.020008f,-0.180021f,-0.180021f,-0.020008f,0.157790f,0.195335f,
	0.059254f,-0.129495f,-0.203141f,-0.096223f,0.096223f,0.203141f,0.129495f,-0.059254f,-0.195335f,-0.157790f,
	0.020008f,0.180021f,0.180021f,0.020008f,-0.157790f,-0.195335f,-0.059254f,0.129495f,0.203141f,0.096223f,
	-0.096223f,-0.203141f,-0.129495f,0.059254f,0.195335f,0.157790f,-0.020008f,-0.180021f,0.176777f,0.000000f,
	-0.176777f,-0.176777f,-0.000000f,0.176777f,0.176777f,0.000000f,-0.176777f,-0.176777f,-0.000000f,0.176777f,
	0.176777f,0.000000f,-0.176777f,-0.176777f,-0.000000f,0.176777f,0.176777f,-0.000000f,-0.176777f,-0.176777f,
	-0.000000f,0.176777f,0.176777f,-0.000000f,-0.176777f,-0.176777f,-0.000000f,0.176777f,0.176777f,-0.000000f,
	-0.176777f,-0.176777f,-0.000000f,0.176777f,0.176777f,-0.000000f,-0.176777f,-0.176777f,-0.000000f,0.176777f,
	0.176777f,-0.000000f,-0.176777f,-0.176777f,-0.000000f,0.176777f,0.173343f,-0.020008f,-0.191041f,-0.148983f,
	0.059254f,0.201398f,0.118898f,-0.096223f,-0.204015f,-0.084243f,0.129495f,0.198792f,0.046352f,-0.157790f,
	-0.185929f,-0.006679f,0.180021f,0.165922f,-0.033251f,-0.195335f,-0.139538f,0.071903f,0.203141f,0.107791f,
	-0.107791f,-0.203141f,-0.071903f,0.139538f,0.195335f,0.033251f,-0.165922f,-0.180021f,0.006679f,0.185929f,
	0.157790f,-0.046352f,-0.198792f,-0.129495f,0.084243f,0.204015f,0.096223f,-0.118898f,-0.201398f,-0.059254f,
	0.148983f,0.191041f,0.020008f,-0.173343f,0.169723f,-0.039823f,-0.200202f,-0.113405f,0.113405f,0.200202f,
	0.039823f,-0.169723f,-0.169723f,0.039823f,0.200202f,0.113405f,-0.113405f,-0.200202f,-0.039823f,0.169723f,
	0.169723f,-0.039823f,-0.200202f,-0.113405f,0.113405f,0.200202f,0.039823f,-0.169723f,-0.169723f,0.039823f,
	0.200202f,0.113405f,-0.113405f,-0.200202f,-0.039823f,0.169723f,0.169723f,-0.039823f,-0.200202f,-0.113405f,
	0.113405f,0.200202f,0.039823f,-0.169723f,-0.169723f,0.039823f,0.200202f,0.113405f,-0.113405f,-0.200202f,
	-0.039823f,0.169723f,0.165922f,-0.059254f,-0.204015f,-0.071903f,0.157790f,0.173343f,-0.046352f,-0.203141f,
	-0.084243f,0.148983f,0.180021f,-0.033251f,-0.201398f,-0.096223f,0.139538f,0.185929f,-0.020008f,-0.198792f,
	-0.107791f,0.129495f,0.191041f,-0.006679f,-0.195335f,-0.118898f,0.118898f,0.195335f,0.006679f,-0.191041f,
	-0.129495f,0.107791f,0.198792f,0.020008f,-0.185929f,-0.139538f,0.096223f,0.201398f,0.033251f,-0.180021f,
	-0.148983f,0.084243f,0.203141f,0.046352f,-0.173343f,-0.157790f,0.071903f,0.204015f,0.059254f,-0.165922f,
	0.161943f,-0.078115f,-0.202378f,-0.026644f,0.188586f,0.124263f,-0.124263f,-0.188586f,0.026644f,0.202378f,
	0.078115f,-0.161943f,-0.161943f,0.078115f,0.202378f,0.026644f,-0.188586f,-0.124263f,0.124263f,0.188586f,
	-0.026644f,-0.202378f,-0.078115f,0.161943f,0.161943f,-0.078115f,-0.202378f,-0.026644f,0.188586f,0.124263f,
	-0.124263f,-0.188586f,0.026644f,0.202378f,0.078115f,-0.161943f,-0.161943f,0.078115f,0.202378f,0.026644f,
	-0.188586f,-0.124263f,0.124263f,0.188586f,-0.026644f,-0.202378f,-0.078115f,0.161943f,0.157790f,-0.096223f,
	-0.195335f,0.020008f,0.203141f,0.059254f,-0.180021f,-0.129495f,0.129495f,0.180021f,-0.059254f,-0.203141f,
	-0.020008f,0.195335f,0.096223f,-0.157790f,-0.157790f,0.096223f,0.195335f,-0.020008f,-0.203141f,-0.059254f,
	0.180021f,0.129495f,-0.129495f,-0.180021f,0.059254f,0.203141f,0.020008f,-0.195335f,-0.096223f,0.157790f,
	0.157790f,-0.096223f,-0.195335f,0.020008f,0.203141f,0.059254f,-0.180021f,-0.129495f,0.129495f,0.180021f,
	-0.059254f,-0.203141f,-0.020008f,0.195335f,0.096223f,-0.157790f,0.153469f,-0.113405f,-0.183073f,0.065614f,
	0.200202f,-0.013350f,-0.203687f,-0.039823f,0.193291f,0.090282f,-0.169723f,-0.134588f,0.134588f,0.169723f,
	-0.090282f,-0.193291f,0.039823f,0.203687f,0.013350f,-0.200202f,-0.065614f,0.183073f,0.113405f,-0.153469f,
	-0.153469f,0.113405f,0.183073f,-0.065614f,-0.200202f,0.013350f,0.203687f,0.039823f,-0.193291f,-0.090282f,
	0.169723f,0.134588f,-0.134588f,-0.169723f,0.090282f,0.193291f,-0.039823f,-0.203687f,-0.013350f,0.200202f,
	0.065614f,-0.183073f,-0.113405f,0.153469f,0.148983f,-0.129495f,-0.165922f,0.107791f,0.180021f,-0.084243f,
	-0.191041f,0.059254f,0.198792f,-0.033251f,-0.203141f,0.006679f,0.204015f,0.020008f,-0.201398f,-0.046352f,
	0.195335f,0.071903f,-0.185929f,-0.096223f,0.173343f,0.118898f,-0.157790f,-0.139538f,0.139538f,0.157790f,
	-0.118898f,-0.173343f,0.096223f,0.185929f,-0.071903f,-0.195335f,0.046352f,0.201398f,-0.020008f,-0.204015f,
	-0.006679f,0.203141f,0.033251f,-0.198792f,-0.059254f,0.191041f,0.084243f,-0.180021f,-0.107791f,0.165922f,
	0.129495f,-0.148983f,0.144338f,-0.144338f,-0.144338f,0.144338f,0.144338f,-0.144338f,-0.144338f,0.144338f,
	0.144338f,-0.144338f,-0.144338f,0.144338f,0.144338f,-0.144338f,-0.144338f,0.144338f,0.144338f,-0.144338f,
	-0.144338f,0.144338f,0.144338f,-0.144338f,-0.144338f,0.144338f,0.144338f,-0.144338f,-0.144338f,0.144338f,
	0.144338f,-0.144338f,-0.144338f,0.144338f,0.144338f,-0.144338f,-0.144338f,0.144338f,0.144338f,-0.144338f,
	-0.144338f,0.144338f,0.144338f,-0.144338f,-0.144338f,0.144338f,0.144338f,-0.144338f,-0.144338f,0.144338f,
	0.139538f,-0.157790f,-0.118898f,0.173343f,0.096223f,-0.185929f,-0.071903f,0.195335f,0.046352f,-0.201398f,
	-0.020008f,0.204015f,-0.006679f,-0.203141f,0.033251f,0.198792f,-0.059254f,-0.191041f,0.084243f,0.180021f,
	-0.107791f,-0.165922f,0.129495f,0.148983f,-0.148983f,-0.129495f,0.165922f,0.107791f,-0.180021f,-0.084243f,
	0.191041f,0.059254f,-0.198792f,-0.033251f,0.203141f,0.006679f,-0.204015f,0.020008f,0.201398f,-0.046352f,
	-0.195335f,0.071903f,0.185929f,-0.096223f,-0.173343f,0.118898f,0.157790f,-0.139538f,0.134588f,-0.169723f,
	-0.090282f,0.193291f,0.039823f,-0.203687f,0.013350f,0.200202f,-0.065614f,-0.183073f,0.113405f,0.153469f,
	-0.153469f,-0.113405f,0.183073f,0.065614f,-0.200202f,-0.013350f,0.203687f,-0.039823f,-0.193291f,0.090282f,
	0.169723f,-0.134588f,-0.134588f,0.169723f,0.090282f,-0.193291f,-0.039823f,0.203687f,-0.013350f,-0.200202f,
	0.065614f,0.183073f,-0.113405f,-0.153469f,0.153469f,0.113405f,-0.183073f,-0.065614f,0.200202f,0.013350f,
	-0.203687f,0.039823f,0.193291f,-0.090282f,-0.169723f,0.134588f,0.129495f,-0.180021f,-0.059254f,0.203141f,
	-0.020008f,-0.195335f,0.096223f,0.157790f,-0.157790f,-0.096223f,0.195335f,0.020008f,-0.203141f,0.059254f,
	0.180021f,-0.129495f,-0.129495f,0.180021f,0.059254f,-0.203141f,0.020008f,0.195335f,-0.096223f,-0.157790f,
	0.157790f,0.096223f,-0.195335f,-0.020008f,0.203141f,-0.059254f,-0.180021f,0.129495f,0.129495f,-0.180021f,
	-0.059254f,0.203141f,-0.020008f,-0.195335f,0.096223f,0.157790f,-0.157790f,-0.096223f,0.195335f,0.020008f,
	-0.203141f,0.059254f,0.180021f,-0.129495f,0.124263f,-0.188586f,-0.026644f,0.202378f,-0.078115f,-0.161943f,
	0.161943f,0.078115f,-0.202378f,0.026644f,0.188586f,-0.124263f,-0.124263f,0.188586f,0.026644f,-0.202378f,
	0.078115f,0.161943f,-0.161943f,-0.078115f,0.202378f,-0.026644f,-0.188586f,0.124263f,0.124263f,-0.188586f,
	-0.026644f,0.202378f,-0.078115f,-0.161943f,0.161943f,0.078115f,-0.202378f,0.026644f,0.188586f,-0.124263f,
	-0.124263f,0.188586f,0.026644f,-0.202378f,0.078115f,0.161943f,-0.161943f,-0.078115f,0.202378f,-0.026644f,
	-0.188586f,0.124263f,0.118898f,-0.195335f,0.006679f,0.191041f,-0.129495f,-0.107791f,0.198792f,-0.020008f,
	-0.185929f,0.139538f,0.096223f,-0.201398f,0.033251f,0.180021f,-0.148983f,-0.084243f,0.203141f,-0.046352f,
	-0.173343f,0.157790f,0.071903f,-0.204015f,0.059254f,0.165922f,-0.165922f,-0.059254f,0.204015f,-0.071903f,
	-0.157790f,0.173343f,0.046352f,-0.203141f,0.084243f,0.148983f,-0.180021f,-0.033251f,0.201398f,-0.096223f,
	-0.139538f,0.185929f,0.020008f,-0.198792f,0.107791f,0.129495f,-0.191041f,-0.006679f,0.195335f,-0.118898f,
	0.113405f,-0.200202f,0.039823f,0.169723f,-0.169723f,-0.039823f,0.200202f,-0.113405f,-0.113405f,0.200202f,
	-0.039823f,-0.169723f,0.169723f,0.039823f,-0.200202f,0.113405f,0.113405f,-0.200202f,0.039823f,0.169723f,
	-0.169723f,-0.039823f,0.200202f,-0.113405f,-0.113405f,0.200202f,-0.039823f,-0.169723f,0.169723f,0.039823f,
	-0.200202f,0.113405f,0.113405f,-0.200202f,0.039823f,0.169723f,-0.169723f,-0.039823f,0.200202f,-0.113405f,
	-0.113405f,0.200202f,-0.039823f,-0.169723f,0.169723f,0.039823f,-0.200202f,0.113405f,0.107791f,-0.203141f,
	0.071903f,0.139538f,-0.195335f,0.033251f,0.165922f,-0.180021f,-0.006679f,0.185929f,-0.157790f,-0.046352f,
	0.198792f,-0.129495f,-0.084243f,0.204015f,-0.096223f,-0.118898f,0.201398f,-0.059254f,-0.148983f,0.191041f,
	-0.020008f,-0.173343f,0.173343f,0.020008f,-0.191041f,0.148983f,0.059254f,-0.201398f,0.118898f,0.096223f,
	-0.204015f,0.084243f,0.129495f,-0.198792f,0.046352f,0.157790f,-0.185929f,0.006679f,0.180021f,-0.165922f,
	-0.033251f,0.195335f,-0.139538f,-0.071903f,0.203141f,-0.107791f,};




const float32_t mfcc_window_coefs_config1_f32[NB_MFCC_WIN_COEFS_CONFIG1_F32]={
	0.080000f,0.080035f,0.080139f,0.080312f,0.080554f,0.080866f,0.081246f,0.081696f,0.082215f,0.082803f,
	0.083459f,0.084185f,0.084979f,0.085841f,0.086772f,0.087771f,0.088839f,0.089974f,0.091177f,0.092448f,
	0.093786f,0.095191f,0.096663f,0.098202f,0.099807f,0.101479f,0.103217f,0.105021f,0.106890f,0.108824f,
	0.110823f,0.112887f,0.115015f,0.117208f,0.119464f,0.121783f,0.124165f,0.126610f,0.129117f,0.131686f,
	0.134316f,0.137008f,0.139760f,0.142572f,0.145445f,0.148377f,0.151367f,0.154417f,0.157524f,0.160689f,
	0.163911f,0.167190f,0.170525f,0.173915f,0.177361f,0.180861f,0.184415f,0.188023f,0.191684f,0.195397f,
	0.199162f,0.202979f,0.206846f,0.210764f,0.214731f,0.218747f,0.222811f,0.226924f,0.231083f,0.235289f,
	0.239540f,0.243837f,0.248179f,0.252565f,0.256993f,0.261465f,0.265978f,0.270533f,0.275128f,0.279763f,
	0.284438f,0.289151f,0.293901f,0.298689f,0.303513f,0.308372f,0.313267f,0.318195f,0.323157f,0.328152f,
	0.333179f,0.338237f,0.343325f,0.348442f,0.353589f,0.358764f,0.363966f,0.369194f,0.374448f,0.379727f,
	0.385031f,0.390357f,0.395706f,0.401077f,0.406469f,0.411881f,0.417312f,0.422762f,0.428229f,0.433713f,
	0.439213f,0.444729f,0.450258f,0.455802f,0.461358f,0.466925f,0.472504f,0.478093f,0.483691f,0.489298f,
	0.494912f,0.500533f,0.506160f,0.511792f,0.517429f,0.523069f,0.528711f,0.534355f,0.540000f,0.545645f,
	0.551289f,0.556931f,0.562571f,0.568208f,0.573840f,0.579467f,0.585088f,0.590702f,0.596309f,0.601907f,
	0.607496f,0.613075f,0.618642f,0.624198f,0.629742f,0.635271f,0.640787f,0.646287f,0.651771f,0.657238f,
	0.662688f,0.668119f,0.673531f,0.678923f,0.684294f,0.689643f,0.694969f,0.700273f,0.705552f,0.710806f,
	0.716034f,0.721236f,0.726411f,0.731558f,0.736675f,0.741763f,0.746821f,0.751848f,0.756842f,0.761805f,
	0.766733f,0.771628f,0.776487f,0.781311f,0.786099f,0.790850f,0.795562f,0.800237f,0.804872f,0.809467f,
	0.814022f,0.818535f,0.823007f,0.827435f,0.831821f,0.836163f,0.840460f,0.844711f,0.848917f,0.853076f,
	0.857189f,0.861253f,0.865269f,0.869236f,0.873154f,0.877021f,0.880838f,0.884603f,0.888316f,0.891977f,
	0.895585f,0.899139f,0.902639f,0.906085f,0.909475f,0.912810f,0.916089f,0.919311f,0.922476f,0.925583f,
	0.928633f,0.931623f,0.934555f,0.937428f,0.940240f,0.942992f,0.945684f,0.948314f,0.950883f,0.953390f,
	0.955835f,0.958217f,0.960536f,0.962792f,0.964985f,0.967113f,0.969177f,0.971176f,0.973110f,0.974979f,
	0.976783f,0.978521f,0.980193f,0.981798f,0.983337f,0.984809f,0.986214f,0.987552f,0.988823f,0.990026f,
	0.991161f,0.992229f,0.993228f,0.994159f,0.995021f,0.995815f,0.996541f,0.997197f,0.997785f,0.998304f,
	0.998754f,0.999134f,0.999446f,0.999688f,0.999861f,0.999965f,1.000000f,0.999965f,0.999861f,0.999688f,
	0.999446f,0.999134f,0.998754f,0.998304f,0.997785f,0.997197f,0.996541f,0.995815f,0.995021f,0.994159f,
	0.993228f,0.992229f,0.991161f,0.990026f,0.988823f,0.987552f,0.986214f,0.984809f,0.983337f,0.981798f,
	0.980193f,0.978521f,0.976783f,0.974979f,0.973110f,0.971176f,0.969177f,0.967113f,0.964985f,0.962792f,
	0.960536f,0.958217f,0.955835f,0.953390f,0.950883f,0.948314f,0.945684f,0.942992f,0.940240f,0.937428f,
	0.934555f,0.931623f,0.928633f,0.925583f,0.922476f,0.919311f,0.916089f,0.912810f,0.909475f,0.906085f,
	0.902639f,0.899139f,0.895585f,0.891977f,0.888316f,0.884603f,0.880838f,0.877021f,0.873154f,0.869236f,
	0.865269f,0.861253f,0.857189f,0.853076f,0.848917f,0.844711f,0.840460f,0.836163f,0.831821f,0.827435f,
	0.823007f,0.818535f,0.814022f,0.809467f,0.804872f,0.800237f,0.795562f,0.790850f,0.786099f,0.781311f,
	0.776487f,0.771628f,0.766733f,0.761805f,0.756842f,0.751848f,0.746821f,0.741763f,0.736675f,0.731558f,
	0.726411f,0.721236f,0.716034f,0.710806f,0.705552f,0.700273f,0.694969f,0.689643f,0.684294f,0.678923f,
	0.673531f,0.668119f,0.662688f,0.657238f,0.651771f,0.646287f,0.640787f,0.635271f,0.629742f,0.624198f,
	0.618642f,0.613075f,0.607496f,0.601907f,0.596309f,0.590702f,0.585088f,0.579467f,0.573840f,0.568208f,
	0.562571f,0.556931f,0.551289f,0.545645f,0.540000f,0.534355f,0.528711f,0.523069f,0.517429f,0.511792f,
	0.506160f,0.500533f,0.494912f,0.489298f,0.483691f,0.478093f,0.472504f,0.466925f,0.461358f,0.455802f,
	0.450258f,0.444729f,0.439213f,0.433713f,0.428229f,0.422762f,0.417312f,0.411881f,0.406469f,0.401077f,
	0.395706f,0.390357f,0.385031f,0.379727f,0.374448f,0.369194f,0.363966f,0.358764f,0.353589f,0.348442f,
	0.343325f,0.338237f,0.333179f,0.328152f,0.323157f,0.318195f,0.313267f,0.308372f,0.303513f,0.298689f,
	0.293901f,0.289151f,0.284438f,0.279763f,0.275128f,0.270533f,0.265978f,0.261465f,0.256993f,0.252565f,
	0.248179f,0.243837f,0.239540f,0.235289f,0.231083f,0.226924f,0.222811f,0.218747f,0.214731f,0.210764f,
	0.206846f,0.202979f,0.199162f,0.195397f,0.191684f,0.188023f,0.184415f,0.180861f,0.177361f,0.173915f,
	0.170525f,0.167190f,0.163911f,0.160689f,0.157524f,0.154417f,0.151367f,0.148377f,0.145445f,0.142572f,
	0.139760f,0.137008f,0.134316f,0.131686f,0.129117f,0.126610f,0.124165f,0.121783f,0.119464f,0.117208f,
	0.115015f,0.112887f,0.110823f,0.108824f,0.106890f,0.105021f,0.103217f,0.101479f,0.099807f,0.098202f,
	0.096663f,0.095191f,0.093786f,0.092448f,0.091177f,0.089974f,0.088839f,0.087771f,0.086772f,0.085841f,
	0.084979f,0.084185f,0.083459f,0.082803f,0.082215f,0.081696f,0.081246f,0.080866f,0.080554f,0.080312f,
	0.080139f,0.080035f,};



const uint32_t mfcc_filter_pos_config1_f32[NB_MFCC_NB_FILTER_CONFIG1_F32]={
	3,4,5,6,8,9,11,13,14,16,
	18,20,22,25,27,30,32,35,38,41,
	44,47,51,55,59,63,67,72,76,81,
	87,92,98,104,110,117,124,132,139,148,
	156,165,175,185,195,206,218,230,};
const uint32_t mfcc_filter_len_config1_f32[NB_MFCC_NB_FILTER_CONFIG1_F32]={
	2,2,3,3,3,4,3,3,4,4,
	4,5,5,5,5,5,6,6,6,6,
	7,8,8,8,8,9,9,9,11,11,
	11,12,12,13,14,15,15,16,17,17,
	19,20,20,21,23,24,25,26,};




const float32_t mfcc_filter_coefs_config1_f32[NB_MFCC_FILTER_COEFS_CONFIG1_F32]={
	0.769508f,0.452642f,0.547358f,0.703716f,0.296284f,0.981639f,0.284552f,0.018361f,0.715448f,0.610783f,
	0.389217f,0.958824f,0.327305f,0.041176f,0.672695f,0.714984f,0.120729f,0.285016f,0.879271f,0.543503f,
	0.456497f,0.982358f,0.436423f,0.017642f,0.563577f,0.904893f,0.387029f,0.095107f,0.612971f,0.882146f,
	0.389608f,0.117854f,0.610392f,0.908826f,0.439252f,0.091174f,0.560748f,0.980376f,0.531721f,0.092840f,
	0.019624f,0.468279f,0.907160f,0.663319f,0.242765f,0.336681f,0.757235f,0.830812f,0.427115f,0.031350f,
	0.169188f,0.572885f,0.968650f,0.643211f,0.262410f,0.356789f,0.737590f,0.888673f,0.521745f,0.161382f,
	0.111327f,0.478255f,0.838618f,0.807351f,0.459436f,0.117428f,0.192649f,0.540564f,0.882572f,0.781130f,
	0.450354f,0.124922f,0.218870f,0.549646f,0.875078f,0.804664f,0.489418f,0.179030f,0.195336f,0.510582f,
	0.820970f,0.873352f,0.572243f,0.275569f,0.126648f,0.427757f,0.724431f,0.983201f,0.695016f,0.410896f,
	0.130727f,0.016799f,0.304984f,0.589104f,0.869273f,0.854402f,0.581816f,0.312869f,0.047466f,0.145598f,
	0.418184f,0.687131f,0.952534f,0.785515f,0.526926f,0.271614f,0.019498f,0.214485f,0.473074f,0.728386f,
	0.980502f,0.770499f,0.524540f,0.281548f,0.041452f,0.229501f,0.475460f,0.718452f,0.958548f,0.804184f,
	0.569679f,0.337872f,0.108702f,0.195816f,0.430321f,0.662128f,0.891298f,0.882110f,0.658039f,0.436433f,
	0.217238f,0.000403f,0.117890f,0.341961f,0.563567f,0.782762f,0.999597f,0.785877f,0.573612f,0.363560f,
	0.155676f,0.214123f,0.426388f,0.636440f,0.844324f,0.949915f,0.746235f,0.544593f,0.344950f,0.147267f,
	0.050085f,0.253765f,0.455407f,0.655050f,0.852733f,0.951504f,0.757626f,0.565596f,0.375379f,0.186942f,
	0.000251f,0.048496f,0.242374f,0.434404f,0.624621f,0.813058f,0.999749f,0.815275f,0.631981f,0.450341f,
	0.270324f,0.091901f,0.184725f,0.368019f,0.549659f,0.729676f,0.908099f,0.915045f,0.739728f,0.565923f,
	0.393606f,0.222750f,0.053331f,0.084955f,0.260272f,0.434077f,0.606394f,0.777250f,0.946669f,0.885325f,
	0.718709f,0.553459f,0.389554f,0.226972f,0.065692f,0.114675f,0.281291f,0.446541f,0.610446f,0.773028f,
	0.934308f,0.905693f,0.746954f,0.589457f,0.433182f,0.278109f,0.124222f,0.094307f,0.253046f,0.410543f,
	0.566818f,0.721891f,0.875778f,0.971501f,0.819929f,0.669489f,0.520164f,0.371939f,0.224796f,0.078720f,
	0.028499f,0.180071f,0.330511f,0.479836f,0.628061f,0.775204f,0.921280f,0.933695f,0.789707f,0.646742f,
	0.504783f,0.363818f,0.223833f,0.084814f,0.066305f,0.210293f,0.353258f,0.495217f,0.636182f,0.776167f,
	0.915186f,0.946748f,0.809621f,0.673422f,0.538137f,0.403755f,0.270264f,0.137651f,0.005906f,0.053252f,
	0.190379f,0.326578f,0.461863f,0.596245f,0.729736f,0.862349f,0.994094f,0.875016f,0.744972f,0.615762f,
	0.487375f,0.359802f,0.233031f,0.107053f,0.124984f,0.255028f,0.384238f,0.512625f,0.640198f,0.766969f,
	0.892947f,0.981858f,0.857437f,0.733779f,0.610875f,0.488717f,0.367296f,0.246601f,0.126626f,0.007361f,
	0.018142f,0.142563f,0.266221f,0.389125f,0.511283f,0.632704f,0.753399f,0.873374f,0.992639f,0.888798f,
	0.770929f,0.653745f,0.537239f,0.421404f,0.306230f,0.191711f,0.077840f,0.111202f,0.229071f,0.346255f,
	0.462761f,0.578596f,0.693770f,0.808289f,0.922160f,0.964609f,0.852010f,0.740038f,0.628684f,0.517943f,
	0.407807f,0.298270f,0.189326f,0.080967f,0.035391f,0.147990f,0.259962f,0.371316f,0.482057f,0.592193f,
	0.701730f,0.810674f,0.919033f,0.973188f,0.865983f,0.759346f,0.653269f,0.547749f,0.442779f,0.338352f,
	0.234464f,0.131110f,0.028283f,0.026812f,0.134017f,0.240654f,0.346731f,0.452251f,0.557221f,0.661648f,
	0.765536f,0.868890f,0.971717f,0.925978f,0.824190f,0.722913f,0.622144f,0.521876f,0.422104f,0.322825f,
	0.224032f,0.125721f,0.027888f,0.074022f,0.175810f,0.277087f,0.377856f,0.478124f,0.577896f,0.677175f,
	0.775968f,0.874279f,0.972112f,0.930528f,0.833636f,0.737208f,0.641239f,0.545726f,0.450663f,0.356046f,
	0.261872f,0.168136f,0.074835f,0.069472f,0.166364f,0.262792f,0.358761f,0.454274f,0.549337f,0.643954f,
	0.738128f,0.831864f,0.925165f,0.981963f,0.889518f,0.797495f,0.705890f,0.614700f,0.523922f,0.433550f,
	0.343582f,0.254014f,0.164843f,0.076064f,0.018037f,0.110482f,0.202505f,0.294110f,0.385300f,0.476078f,
	0.566450f,0.656418f,0.745986f,0.835157f,0.923936f,0.987675f,0.899673f,0.812053f,0.724812f,0.637948f,
	0.551456f,0.465335f,0.379580f,0.294189f,0.209158f,0.124484f,0.040165f,0.012325f,0.100327f,0.187947f,
	0.275188f,0.362052f,0.448544f,0.534665f,0.620420f,0.705811f,0.790842f,0.875516f,0.959835f,0.956198f,
	0.872579f,0.789305f,0.706375f,0.623784f,0.541531f,0.459612f,0.378025f,0.296767f,0.215836f,0.135228f,
	0.054942f,0.043802f,0.127422f,0.210695f,0.293625f,0.376216f,0.458469f,0.540388f,0.621975f,0.703233f,
	0.784164f,0.864772f,0.945058f,0.974974f,0.895323f,0.815985f,0.736959f,0.658242f,0.579830f,0.501723f,
	0.423918f,0.346412f,0.269203f,0.192289f,0.115667f,0.039336f,0.025026f,0.104677f,0.184015f,0.263041f,
	0.341758f,0.420170f,0.498277f,0.576082f,0.653588f,0.730797f,0.807711f,0.884333f,0.960664f,0.963293f,
	0.887536f,0.812062f,0.736871f,0.661959f,0.587324f,0.512965f,0.438880f,0.365066f,0.291522f,0.218245f,
	0.145233f,0.072486f,};



