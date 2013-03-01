#include <string>
#include <stdio.h>
#include <v8.h>
#include <node.h>

#include "tizenair_system.h"
#include "images.h"

extern "C" {
    void NODE_EXTERN init(v8::Handle<v8::Object> target) {
        System::Init(target);
        Images::Init(target);
    }
}

NODE_MODULE(native, init);



