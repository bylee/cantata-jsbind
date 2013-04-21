#define BUILDING_NODE_EXTENSION
#include <string>
#include <stdio.h>
#include <v8.h>
#include <node.h>

#include "tizenair-app.h"
#include "tizenair-system.h"
#include "tizenair-image.h"
#include "tizenair-music.h"
#include "tizenair-contact.h"

void init(v8::Handle<v8::Object> target) {
	System::Init(target);
	Images::Init(target);
	Musics::Init(target);
	Contacts::Init(target);
	Apps::Init(target);
}

NODE_MODULE(tizenair, init);
