/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"

#include "JSNodeFilter.h"

#include <wtf/GetPtr.h>

#include "JSNode.h"
#include "NodeFilter.h"

using namespace KJS;

namespace WebCore {

/* Hash table */

static const HashEntry JSNodeFilterTableEntries[] =
{
    { "constructor", JSNodeFilter::ConstructorAttrNum, DontDelete|DontEnum|ReadOnly, 0, 0 }
};

static const HashTable JSNodeFilterTable = 
{
    2, 1, JSNodeFilterTableEntries, 1
};

/* Hash table for constructor */

static const HashEntry JSNodeFilterConstructorTableEntries[] =
{
    { "SHOW_CDATA_SECTION", NodeFilter::SHOW_CDATA_SECTION, DontDelete|ReadOnly, 0, &JSNodeFilterConstructorTableEntries[18] },
    { "FILTER_ACCEPT", NodeFilter::FILTER_ACCEPT, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "FILTER_REJECT", NodeFilter::FILTER_REJECT, DontDelete|ReadOnly, 0, &JSNodeFilterConstructorTableEntries[16] },
    { "SHOW_TEXT", NodeFilter::SHOW_TEXT, DontDelete|ReadOnly, 0, &JSNodeFilterConstructorTableEntries[19] },
    { "SHOW_COMMENT", NodeFilter::SHOW_COMMENT, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_ALL", NodeFilter::SHOW_ALL, DontDelete|ReadOnly, 0, &JSNodeFilterConstructorTableEntries[20] },
    { "SHOW_ENTITY_REFERENCE", NodeFilter::SHOW_ENTITY_REFERENCE, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_NOTATION", NodeFilter::SHOW_NOTATION, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_PROCESSING_INSTRUCTION", NodeFilter::SHOW_PROCESSING_INSTRUCTION, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SHOW_DOCUMENT", NodeFilter::SHOW_DOCUMENT, DontDelete|ReadOnly, 0, 0 },
    { "FILTER_SKIP", NodeFilter::FILTER_SKIP, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SHOW_ELEMENT", NodeFilter::SHOW_ELEMENT, DontDelete|ReadOnly, 0, &JSNodeFilterConstructorTableEntries[17] },
    { "SHOW_ATTRIBUTE", NodeFilter::SHOW_ATTRIBUTE, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_ENTITY", NodeFilter::SHOW_ENTITY, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_DOCUMENT_TYPE", NodeFilter::SHOW_DOCUMENT_TYPE, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_DOCUMENT_FRAGMENT", NodeFilter::SHOW_DOCUMENT_FRAGMENT, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSNodeFilterConstructorTable = 
{
    2, 21, JSNodeFilterConstructorTableEntries, 16
};

class JSNodeFilterConstructor : public DOMObject {
public:
    JSNodeFilterConstructor(ExecState* exec)
    {
        setPrototype(exec->lexicalInterpreter()->builtinObjectPrototype());
        putDirect(exec->propertyNames().prototype, JSNodeFilterPrototype::self(exec), None);
    }
    virtual bool getOwnPropertySlot(ExecState*, const Identifier&, PropertySlot&);
    JSValue* getValueProperty(ExecState*, int token) const;
    virtual const ClassInfo* classInfo() const { return &info; }
    static const ClassInfo info;

    virtual bool implementsHasInstance() const { return true; }
};

const ClassInfo JSNodeFilterConstructor::info = { "NodeFilterConstructor", 0, &JSNodeFilterConstructorTable, 0 };

bool JSNodeFilterConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeFilterConstructor, DOMObject>(exec, &JSNodeFilterConstructorTable, this, propertyName, slot);
}

JSValue* JSNodeFilterConstructor::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

/* Hash table for prototype */

static const HashEntry JSNodeFilterPrototypeTableEntries[] =
{
    { "FILTER_SKIP", NodeFilter::FILTER_SKIP, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_ATTRIBUTE", NodeFilter::SHOW_ATTRIBUTE, DontDelete|ReadOnly, 0, 0 },
    { "FILTER_REJECT", NodeFilter::FILTER_REJECT, DontDelete|ReadOnly, 0, &JSNodeFilterPrototypeTableEntries[18] },
    { "SHOW_PROCESSING_INSTRUCTION", NodeFilter::SHOW_PROCESSING_INSTRUCTION, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_DOCUMENT_FRAGMENT", NodeFilter::SHOW_DOCUMENT_FRAGMENT, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SHOW_DOCUMENT", NodeFilter::SHOW_DOCUMENT, DontDelete|ReadOnly, 0, 0 },
    { 0, 0, 0, 0, 0 },
    { "SHOW_COMMENT", NodeFilter::SHOW_COMMENT, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_ENTITY_REFERENCE", NodeFilter::SHOW_ENTITY_REFERENCE, DontDelete|ReadOnly, 0, 0 },
    { "FILTER_ACCEPT", NodeFilter::FILTER_ACCEPT, DontDelete|ReadOnly, 0, &JSNodeFilterPrototypeTableEntries[17] },
    { "SHOW_ENTITY", NodeFilter::SHOW_ENTITY, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_CDATA_SECTION", NodeFilter::SHOW_CDATA_SECTION, DontDelete|ReadOnly, 0, 0 },
    { "acceptNode", JSNodeFilter::AcceptNodeFuncNum, DontDelete|Function, 1, 0 },
    { 0, 0, 0, 0, 0 },
    { "SHOW_ALL", NodeFilter::SHOW_ALL, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_DOCUMENT_TYPE", NodeFilter::SHOW_DOCUMENT_TYPE, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_ELEMENT", NodeFilter::SHOW_ELEMENT, DontDelete|ReadOnly, 0, &JSNodeFilterPrototypeTableEntries[19] },
    { "SHOW_TEXT", NodeFilter::SHOW_TEXT, DontDelete|ReadOnly, 0, 0 },
    { "SHOW_NOTATION", NodeFilter::SHOW_NOTATION, DontDelete|ReadOnly, 0, 0 }
};

static const HashTable JSNodeFilterPrototypeTable = 
{
    2, 20, JSNodeFilterPrototypeTableEntries, 17
};

const ClassInfo JSNodeFilterPrototype::info = { "NodeFilterPrototype", 0, &JSNodeFilterPrototypeTable, 0 };

JSObject* JSNodeFilterPrototype::self(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSNodeFilterPrototype>(exec, "[[JSNodeFilter.prototype]]");
}

bool JSNodeFilterPrototype::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticPropertySlot<JSNodeFilterPrototypeFunction, JSNodeFilterPrototype, JSObject>(exec, &JSNodeFilterPrototypeTable, this, propertyName, slot);
}

JSValue* JSNodeFilterPrototype::getValueProperty(ExecState*, int token) const
{
    // The token is the numeric value of its associated constant
    return jsNumber(token);
}

const ClassInfo JSNodeFilter::info = { "NodeFilter", 0, &JSNodeFilterTable, 0 };

JSNodeFilter::JSNodeFilter(ExecState* exec, NodeFilter* impl)
    : m_impl(impl)
{
    setPrototype(JSNodeFilterPrototype::self(exec));
}

JSNodeFilter::~JSNodeFilter()
{
    ScriptInterpreter::forgetDOMObject(m_impl.get());
}

bool JSNodeFilter::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSNodeFilter, KJS::DOMObject>(exec, &JSNodeFilterTable, this, propertyName, slot);
}

JSValue* JSNodeFilter::getValueProperty(ExecState* exec, int token) const
{
    switch (token) {
    case ConstructorAttrNum:
        return getConstructor(exec);
    }
    return 0;
}

JSValue* JSNodeFilter::getConstructor(ExecState* exec)
{
    return KJS::cacheGlobalObject<JSNodeFilterConstructor>(exec, "[[NodeFilter.constructor]]");
}
JSValue* JSNodeFilterPrototypeFunction::callAsFunction(ExecState* exec, JSObject* thisObj, const List& args)
{
    if (!thisObj->inherits(&JSNodeFilter::info))
      return throwError(exec, TypeError);

    NodeFilter* imp = static_cast<NodeFilter*>(static_cast<JSNodeFilter*>(thisObj)->impl());

    switch (id) {
    case JSNodeFilter::AcceptNodeFuncNum: {
        Node* n = toNode(args[0]);


        KJS::JSValue* result = jsNumber(imp->acceptNode(n));
        return result;
    }
    }
    return 0;
}
KJS::JSValue* toJS(KJS::ExecState* exec, NodeFilter* obj)
{
    return KJS::cacheDOMObject<NodeFilter, JSNodeFilter>(exec, obj);
}

}