/*
 * Copyright 2020 Bitnine Co., Ltd.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef AG_AG_LABEL_H
#define AG_AG_LABEL_H

#include "postgres.h"

#define LABEL_KIND_VERTEX 'v'
#define LABEL_KIND_EDGE 'e'

Oid insert_label(const char *label_name, Oid label_graph, int32 label_id,
                 char label_kind, Oid label_relation);

Oid get_label_oid(const char *label_name, Oid label_graph);

#define label_exists(label_name, label_graph) \
    OidIsValid(get_label_oid(label_name, label_graph))

#endif
