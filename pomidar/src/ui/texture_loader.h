#pragma once
#include <d3d11.h>

bool LoadTextureFromFile_D3D11(
    ID3D11Device* device,
    const char* filename,
    ID3D11ShaderResourceView** out_srv,
    int* out_width,
    int* out_height);