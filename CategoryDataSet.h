#pragma once

#using <mscorlib.dll>
#using <System.dll>
#using <System.Data.dll>
#using <System.Xml.dll>

using namespace System::Security::Permissions;
[assembly:SecurityPermissionAttribute(SecurityAction::RequestMinimum, SkipVerification=false)];
// 
// このソース コードは xsd によって自動生成されました。Version=4.6.1055.0 です。
// 
namespace MyHousekeepingBook {
    using namespace System;
    ref class CategoryDataSet;
    
    
    /// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
    [System::Serializable, 
    System::ComponentModel::DesignerCategoryAttribute(L"code"), 
    System::ComponentModel::ToolboxItem(true), 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
    System::Xml::Serialization::XmlRootAttribute(L"CategoryDataSet"), 
    System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
    public ref class CategoryDataSet : public ::System::Data::DataSet {
        public : ref class CategoryDataTableDataTable;
        public : ref class CategoryDataTableRow;
        public : ref class CategoryDataTableRowChangeEvent;
        
        private: MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  tableCategoryDataTable;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void CategoryDataTableRowChangeEventHandler(::System::Object^  sender, MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEvent^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        CategoryDataSet();
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        CategoryDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  CategoryDataTable {
            MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  get();
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::BrowsableAttribute(true), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Visible)]
        virtual property ::System::Data::SchemaSerializationMode SchemaSerializationMode {
            ::System::Data::SchemaSerializationMode get() override;
            System::Void set(::System::Data::SchemaSerializationMode value) override;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataTableCollection^  Tables {
            ::System::Data::DataTableCollection^  get() new;
        }
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::DesignerSerializationVisibilityAttribute(::System::ComponentModel::DesignerSerializationVisibility::Hidden)]
        property ::System::Data::DataRelationCollection^  Relations {
            ::System::Data::DataRelationCollection^  get() new;
        }
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void InitializeDerivedDataSet() override;
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Data::DataSet^  Clone() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeTables() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Boolean ShouldSerializeRelations() override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Void ReadXmlSerializable(::System::Xml::XmlReader^  reader) override;
        
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        virtual ::System::Xml::Schema::XmlSchema^  GetSchemaSerializable() override;
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars();
        
        internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitVars(::System::Boolean initTable);
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void InitClass();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Boolean ShouldSerializeCategoryDataTable();
        
        private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ::System::Void SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        
        public : /// <summary>
///Represents the strongly named DataTable class.
///</summary>
        [System::Serializable, 
        System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedTableSchema")]
        ref class CategoryDataTableDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  column分類;
            
            private: ::System::Data::DataColumn^  column入出金分類;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEventHandler^  CategoryDataTableRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEventHandler^  CategoryDataTableRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEventHandler^  CategoryDataTableRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEventHandler^  CategoryDataTableRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CategoryDataTableDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CategoryDataTableDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CategoryDataTableDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  分類Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  入出金分類Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
            System::ComponentModel::Browsable(false)]
            property ::System::Int32 Count {
                ::System::Int32 get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  default [::System::Int32 ] {
                MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddCategoryDataTableRow(MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  AddCategoryDataTableRow(System::String^  分類, System::String^  入出金分類);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Collections::IEnumerator^  GetEnumerator();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  Clone() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataTable^  CreateInstance() override;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitVars();
            
            private: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void InitClass();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  NewCategoryDataTableRow();
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Data::DataRow^  NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Type^  GetRowType() override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) override;
            
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            virtual ::System::Void OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) override;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void RemoveCategoryDataTableRow(MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class CategoryDataTableRow : public ::System::Data::DataRow {
            
            private: MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  tableCategoryDataTable;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CategoryDataTableRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  分類 {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::String^  入出金分類 {
                System::String^  get();
                System::Void set(System::String^  value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is分類Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set分類Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is入出金分類Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set入出金分類Null();
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class CategoryDataTableRowChangeEvent : public ::System::EventArgs {
            
            private: MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            CategoryDataTableRowChangeEvent(MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  Row {
                MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataRowAction Action {
                ::System::Data::DataRowAction get();
            }
        };
    };
}
namespace MyHousekeepingBook {
    
    
    inline CategoryDataSet::CategoryDataSet() {
        this->BeginInit();
        this->InitClass();
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHousekeepingBook::CategoryDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        __super::Relations->CollectionChanged += schemaChangedHandler;
        this->EndInit();
    }
    
    inline CategoryDataSet::CategoryDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataSet(info, context, false) {
        if (this->IsBinarySerialized(info, context) == true) {
            this->InitVars(false);
            ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHousekeepingBook::CategoryDataSet::SchemaChanged);
            this->Tables->CollectionChanged += schemaChangedHandler1;
            this->Relations->CollectionChanged += schemaChangedHandler1;
            return;
        }
        ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
        if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
            if (ds->Tables[L"CategoryDataTable"] != nullptr) {
                __super::Tables->Add((gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable(ds->Tables[L"CategoryDataTable"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
        }
        this->GetSerializationData(info, context);
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHousekeepingBook::CategoryDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        this->Relations->CollectionChanged += schemaChangedHandler;
    }
    
    inline MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  CategoryDataSet::CategoryDataTable::get() {
        return this->tableCategoryDataTable;
    }
    
    inline ::System::Data::SchemaSerializationMode CategoryDataSet::SchemaSerializationMode::get() {
        return this->_schemaSerializationMode;
    }
    inline System::Void CategoryDataSet::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
        this->_schemaSerializationMode = __identifier(value);
    }
    
    inline ::System::Data::DataTableCollection^  CategoryDataSet::Tables::get() {
        return __super::Tables;
    }
    
    inline ::System::Data::DataRelationCollection^  CategoryDataSet::Relations::get() {
        return __super::Relations;
    }
    
    inline ::System::Void CategoryDataSet::InitializeDerivedDataSet() {
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline ::System::Data::DataSet^  CategoryDataSet::Clone() {
        MyHousekeepingBook::CategoryDataSet^  cln = (cli::safe_cast<MyHousekeepingBook::CategoryDataSet^  >(__super::Clone()));
        cln->InitVars();
        cln->SchemaSerializationMode = this->SchemaSerializationMode;
        return cln;
    }
    
    inline ::System::Boolean CategoryDataSet::ShouldSerializeTables() {
        return false;
    }
    
    inline ::System::Boolean CategoryDataSet::ShouldSerializeRelations() {
        return false;
    }
    
    inline ::System::Void CategoryDataSet::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
        if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            this->Reset();
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXml(reader);
            if (ds->Tables[L"CategoryDataTable"] != nullptr) {
                __super::Tables->Add((gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable(ds->Tables[L"CategoryDataTable"])));
            }
            this->DataSetName = ds->DataSetName;
            this->Prefix = ds->Prefix;
            this->Namespace = ds->Namespace;
            this->Locale = ds->Locale;
            this->CaseSensitive = ds->CaseSensitive;
            this->EnforceConstraints = ds->EnforceConstraints;
            this->Merge(ds, false, ::System::Data::MissingSchemaAction::Add);
            this->InitVars();
        }
        else {
            this->ReadXml(reader);
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchema^  CategoryDataSet::GetSchemaSerializable() {
        ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
        this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
        stream->Position = 0;
        return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
    }
    
    inline ::System::Void CategoryDataSet::InitVars() {
        this->InitVars(true);
    }
    
    inline ::System::Void CategoryDataSet::InitVars(::System::Boolean initTable) {
        this->tableCategoryDataTable = (cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  >(__super::Tables[L"CategoryDataTable"]));
        if (initTable == true) {
            if (this->tableCategoryDataTable != nullptr) {
                this->tableCategoryDataTable->InitVars();
            }
        }
    }
    
    inline ::System::Void CategoryDataSet::InitClass() {
        this->DataSetName = L"CategoryDataSet";
        this->Prefix = L"";
        this->Namespace = L"http://tempuri.org/CategoryDataSet.xsd";
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tableCategoryDataTable = (gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable());
        __super::Tables->Add(this->tableCategoryDataTable);
    }
    
    inline ::System::Boolean CategoryDataSet::ShouldSerializeCategoryDataTable() {
        return false;
    }
    
    inline ::System::Void CategoryDataSet::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
        if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  CategoryDataSet::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        MyHousekeepingBook::CategoryDataSet^  ds = (gcnew MyHousekeepingBook::CategoryDataSet());
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        ::System::Xml::Schema::XmlSchemaAny^  any = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any->Namespace = ds->Namespace;
        sequence->Items->Add(any);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline CategoryDataSet::CategoryDataTableDataTable::CategoryDataTableDataTable() {
        this->TableName = L"CategoryDataTable";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline CategoryDataSet::CategoryDataTableDataTable::CategoryDataTableDataTable(::System::Data::DataTable^  table) {
        this->TableName = table->TableName;
        if (table->CaseSensitive != table->DataSet->CaseSensitive) {
            this->CaseSensitive = table->CaseSensitive;
        }
        if (table->Locale->ToString() != table->DataSet->Locale->ToString()) {
            this->Locale = table->Locale;
        }
        if (table->Namespace != table->DataSet->Namespace) {
            this->Namespace = table->Namespace;
        }
        this->Prefix = table->Prefix;
        this->MinimumCapacity = table->MinimumCapacity;
    }
    
    inline CategoryDataSet::CategoryDataTableDataTable::CategoryDataTableDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  CategoryDataSet::CategoryDataTableDataTable::分類Column::get() {
        return this->column分類;
    }
    
    inline ::System::Data::DataColumn^  CategoryDataSet::CategoryDataTableDataTable::入出金分類Column::get() {
        return this->column入出金分類;
    }
    
    inline ::System::Int32 CategoryDataSet::CategoryDataTableDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  CategoryDataSet::CategoryDataTableDataTable::default::get(
                ::System::Int32 index) {
        return (cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::AddCategoryDataTableRow(MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  row) {
        this->Rows->Add(row);
    }
    
    inline MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  CategoryDataSet::CategoryDataTableDataTable::AddCategoryDataTableRow(
                System::String^  分類, System::String^  入出金分類) {
        MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  rowCategoryDataTableRow = (cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(2) {分類, 入出金分類};
        rowCategoryDataTableRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowCategoryDataTableRow);
        return rowCategoryDataTableRow;
    }
    
    inline ::System::Collections::IEnumerator^  CategoryDataSet::CategoryDataTableDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  CategoryDataSet::CategoryDataTableDataTable::Clone() {
        MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  cln = (cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  CategoryDataSet::CategoryDataTableDataTable::CreateInstance() {
        return (gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable());
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::InitVars() {
        this->column分類 = __super::Columns[L"分類"];
        this->column入出金分類 = __super::Columns[L"入出金分類"];
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::InitClass() {
        this->column分類 = (gcnew ::System::Data::DataColumn(L"分類", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column分類);
        this->column入出金分類 = (gcnew ::System::Data::DataColumn(L"入出金分類", ::System::String::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column入出金分類);
    }
    
    inline MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  CategoryDataSet::CategoryDataTableDataTable::NewCategoryDataTableRow() {
        return (cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  CategoryDataSet::CategoryDataTableDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow(builder));
    }
    
    inline ::System::Type^  CategoryDataSet::CategoryDataTableDataTable::GetRowType() {
        return MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow::typeid;
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->CategoryDataTableRowChanged(this, (gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->CategoryDataTableRowChanging(this, (gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->CategoryDataTableRowDeleted(this, (gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->CategoryDataTableRowDeleting(this, (gcnew MyHousekeepingBook::CategoryDataSet::CategoryDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableDataTable::RemoveCategoryDataTableRow(MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  CategoryDataSet::CategoryDataTableDataTable::GetTypedTableSchema(
                ::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        MyHousekeepingBook::CategoryDataSet^  ds = (gcnew MyHousekeepingBook::CategoryDataSet());
        ::System::Xml::Schema::XmlSchemaAny^  any1 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any1->Namespace = L"http://www.w3.org/2001/XMLSchema";
        any1->MinOccurs = ::System::Decimal(0);
        any1->MaxOccurs = ::System::Decimal::MaxValue;
        any1->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any1);
        ::System::Xml::Schema::XmlSchemaAny^  any2 = (gcnew ::System::Xml::Schema::XmlSchemaAny());
        any2->Namespace = L"urn:schemas-microsoft-com:xml-diffgram-v1";
        any2->MinOccurs = ::System::Decimal(1);
        any2->ProcessContents = ::System::Xml::Schema::XmlSchemaContentProcessing::Lax;
        sequence->Items->Add(any2);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute1 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute1->Name = L"namespace";
        attribute1->FixedValue = ds->Namespace;
        type->Attributes->Add(attribute1);
        ::System::Xml::Schema::XmlSchemaAttribute^  attribute2 = (gcnew ::System::Xml::Schema::XmlSchemaAttribute());
        attribute2->Name = L"tableTypeName";
        attribute2->FixedValue = L"CategoryDataTableDataTable";
        type->Attributes->Add(attribute2);
        type->Particle = sequence;
        ::System::Xml::Schema::XmlSchema^  dsSchema = ds->GetSchemaSerializable();
        if (xs->Contains(dsSchema->TargetNamespace)) {
            ::System::IO::MemoryStream^  s1 = (gcnew ::System::IO::MemoryStream());
            ::System::IO::MemoryStream^  s2 = (gcnew ::System::IO::MemoryStream());
            try {
                ::System::Xml::Schema::XmlSchema^  schema = nullptr;
                dsSchema->Write(s1);
                for (                ::System::Collections::IEnumerator^  schemas = xs->Schemas(dsSchema->TargetNamespace)->GetEnumerator(); schemas->MoveNext();                 ) {
                    schema = (cli::safe_cast<::System::Xml::Schema::XmlSchema^  >(schemas->Current));
                    s2->SetLength(0);
                    schema->Write(s2);
                    if (s1->Length == s2->Length) {
                        s1->Position = 0;
                        s2->Position = 0;
                        for (                        ; ((s1->Position != s1->Length) 
                                    && (s1->ReadByte() == s2->ReadByte()));                         ) {
                            ;
                        }
                        if (s1->Position == s1->Length) {
                            return type;
                        }
                    }
                }
            }
            finally {
                if (s1 != nullptr) {
                    s1->Close();
                }
                if (s2 != nullptr) {
                    s2->Close();
                }
            }
        }
        xs->Add(dsSchema);
        return type;
    }
    
    
    inline CategoryDataSet::CategoryDataTableRow::CategoryDataTableRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableCategoryDataTable = (cli::safe_cast<MyHousekeepingBook::CategoryDataSet::CategoryDataTableDataTable^  >(this->Table));
    }
    
    inline System::String^  CategoryDataSet::CategoryDataTableRow::分類::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableCategoryDataTable->分類Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'CategoryDataTable\' にある列 \'分類\' の値は DBNull です。", e));
        }
    }
    inline System::Void CategoryDataSet::CategoryDataTableRow::分類::set(System::String^  value) {
        this[this->tableCategoryDataTable->分類Column] = value;
    }
    
    inline System::String^  CategoryDataSet::CategoryDataTableRow::入出金分類::get() {
        try {
            return (cli::safe_cast<::System::String^  >(this[this->tableCategoryDataTable->入出金分類Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'CategoryDataTable\' にある列 \'入出金分類\' の値は DBNull です。", e));
        }
    }
    inline System::Void CategoryDataSet::CategoryDataTableRow::入出金分類::set(System::String^  value) {
        this[this->tableCategoryDataTable->入出金分類Column] = value;
    }
    
    inline ::System::Boolean CategoryDataSet::CategoryDataTableRow::Is分類Null() {
        return this->IsNull(this->tableCategoryDataTable->分類Column);
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableRow::Set分類Null() {
        this[this->tableCategoryDataTable->分類Column] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean CategoryDataSet::CategoryDataTableRow::Is入出金分類Null() {
        return this->IsNull(this->tableCategoryDataTable->入出金分類Column);
    }
    
    inline ::System::Void CategoryDataSet::CategoryDataTableRow::Set入出金分類Null() {
        this[this->tableCategoryDataTable->入出金分類Column] = ::System::Convert::DBNull;
    }
    
    
    inline CategoryDataSet::CategoryDataTableRowChangeEvent::CategoryDataTableRowChangeEvent(MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline MyHousekeepingBook::CategoryDataSet::CategoryDataTableRow^  CategoryDataSet::CategoryDataTableRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction CategoryDataSet::CategoryDataTableRowChangeEvent::Action::get() {
        return this->eventAction;
    }
}
