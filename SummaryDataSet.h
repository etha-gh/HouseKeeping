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
    ref class SummaryDataSet;
    
    
    /// <summary>
///Represents a strongly typed in-memory cache of data.
///</summary>
    [System::Serializable, 
    System::ComponentModel::DesignerCategoryAttribute(L"code"), 
    System::ComponentModel::ToolboxItem(true), 
    System::Xml::Serialization::XmlSchemaProviderAttribute(L"GetTypedDataSetSchema"), 
    System::Xml::Serialization::XmlRootAttribute(L"SummaryDataSet"), 
    System::ComponentModel::Design::HelpKeywordAttribute(L"vs.data.DataSet")]
    public ref class SummaryDataSet : public ::System::Data::DataSet {
        public : ref class SumDataTableDataTable;
        public : ref class SumDataTableRow;
        public : ref class SumDataTableRowChangeEvent;
        
        private: MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  tableSumDataTable;
        
        private: ::System::Data::SchemaSerializationMode _schemaSerializationMode;
        
        public : [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        delegate System::Void SumDataTableRowChangeEventHandler(::System::Object^  sender, MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEvent^  e);
        
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        SummaryDataSet();
        protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        SummaryDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
        public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
        System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0"), 
        System::ComponentModel::Browsable(false), 
        System::ComponentModel::DesignerSerializationVisibility(::System::ComponentModel::DesignerSerializationVisibility::Content)]
        property MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  SumDataTable {
            MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  get();
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
        ::System::Boolean ShouldSerializeSumDataTable();
        
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
        ref class SumDataTableDataTable : public ::System::Data::DataTable, public ::System::Collections::IEnumerable {
            
            private: ::System::Data::DataColumn^  column日付;
            
            private: ::System::Data::DataColumn^  column入金合計;
            
            private: ::System::Data::DataColumn^  column出金合計;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEventHandler^  SumDataTableRowChanging;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEventHandler^  SumDataTableRowChanged;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEventHandler^  SumDataTableRowDeleting;
            
            public: [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            event MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEventHandler^  SumDataTableRowDeleted;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SumDataTableDataTable();
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SumDataTableDataTable(::System::Data::DataTable^  table);
            protected: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SumDataTableDataTable(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  日付Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  入金合計Column {
                ::System::Data::DataColumn^  get();
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property ::System::Data::DataColumn^  出金合計Column {
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
            property MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  default [::System::Int32 ] {
                MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  get(::System::Int32 index);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void AddSumDataTableRow(MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  AddSumDataTableRow(System::DateTime 日付, System::Int32 入金合計, 
                        System::Int32 出金合計);
            
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
            MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  NewSumDataTableRow();
            
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
            ::System::Void RemoveSumDataTableRow(MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  row);
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            static ::System::Xml::Schema::XmlSchemaComplexType^  GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs);
        };
        
        public : /// <summary>
///Represents strongly named DataRow class.
///</summary>
        ref class SumDataTableRow : public ::System::Data::DataRow {
            
            private: MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  tableSumDataTable;
            
            internal: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SumDataTableRow(::System::Data::DataRowBuilder^  rb);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::DateTime 日付 {
                System::DateTime get();
                System::Void set(System::DateTime value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 入金合計 {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property System::Int32 出金合計 {
                System::Int32 get();
                System::Void set(System::Int32 value);
            }
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is日付Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set日付Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is入金合計Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set入金合計Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Boolean Is出金合計Null();
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            ::System::Void Set出金合計Null();
        };
        
        public : /// <summary>
///Row event argument class
///</summary>
        [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
        ref class SumDataTableRowChangeEvent : public ::System::EventArgs {
            
            private: MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  eventRow;
            
            private: ::System::Data::DataRowAction eventAction;
            
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute]
            [System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            SumDataTableRowChangeEvent(MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  row, ::System::Data::DataRowAction action);
            public: [System::Diagnostics::DebuggerNonUserCodeAttribute, 
            System::CodeDom::Compiler::GeneratedCodeAttribute(L"System.Data.Design.TypedDataSetGenerator", L"4.0.0.0")]
            property MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  Row {
                MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  get();
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
    
    
    inline SummaryDataSet::SummaryDataSet() {
        this->BeginInit();
        this->InitClass();
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHousekeepingBook::SummaryDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        __super::Relations->CollectionChanged += schemaChangedHandler;
        this->EndInit();
    }
    
    inline SummaryDataSet::SummaryDataSet(::System::Runtime::Serialization::SerializationInfo^  info, ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataSet(info, context, false) {
        if (this->IsBinarySerialized(info, context) == true) {
            this->InitVars(false);
            ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler1 = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHousekeepingBook::SummaryDataSet::SchemaChanged);
            this->Tables->CollectionChanged += schemaChangedHandler1;
            this->Relations->CollectionChanged += schemaChangedHandler1;
            return;
        }
        ::System::String^  strSchema = (cli::safe_cast<::System::String^  >(info->GetValue(L"XmlSchema", ::System::String::typeid)));
        if (this->DetermineSchemaSerializationMode(info, context) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXmlSchema((gcnew ::System::Xml::XmlTextReader((gcnew ::System::IO::StringReader(strSchema)))));
            if (ds->Tables[L"SumDataTable"] != nullptr) {
                __super::Tables->Add((gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable(ds->Tables[L"SumDataTable"])));
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
        ::System::ComponentModel::CollectionChangeEventHandler^  schemaChangedHandler = gcnew ::System::ComponentModel::CollectionChangeEventHandler(this, &MyHousekeepingBook::SummaryDataSet::SchemaChanged);
        __super::Tables->CollectionChanged += schemaChangedHandler;
        this->Relations->CollectionChanged += schemaChangedHandler;
    }
    
    inline MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  SummaryDataSet::SumDataTable::get() {
        return this->tableSumDataTable;
    }
    
    inline ::System::Data::SchemaSerializationMode SummaryDataSet::SchemaSerializationMode::get() {
        return this->_schemaSerializationMode;
    }
    inline System::Void SummaryDataSet::SchemaSerializationMode::set(::System::Data::SchemaSerializationMode value) {
        this->_schemaSerializationMode = __identifier(value);
    }
    
    inline ::System::Data::DataTableCollection^  SummaryDataSet::Tables::get() {
        return __super::Tables;
    }
    
    inline ::System::Data::DataRelationCollection^  SummaryDataSet::Relations::get() {
        return __super::Relations;
    }
    
    inline ::System::Void SummaryDataSet::InitializeDerivedDataSet() {
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline ::System::Data::DataSet^  SummaryDataSet::Clone() {
        MyHousekeepingBook::SummaryDataSet^  cln = (cli::safe_cast<MyHousekeepingBook::SummaryDataSet^  >(__super::Clone()));
        cln->InitVars();
        cln->SchemaSerializationMode = this->SchemaSerializationMode;
        return cln;
    }
    
    inline ::System::Boolean SummaryDataSet::ShouldSerializeTables() {
        return false;
    }
    
    inline ::System::Boolean SummaryDataSet::ShouldSerializeRelations() {
        return false;
    }
    
    inline ::System::Void SummaryDataSet::ReadXmlSerializable(::System::Xml::XmlReader^  reader) {
        if (this->DetermineSchemaSerializationMode(reader) == ::System::Data::SchemaSerializationMode::IncludeSchema) {
            this->Reset();
            ::System::Data::DataSet^  ds = (gcnew ::System::Data::DataSet());
            ds->ReadXml(reader);
            if (ds->Tables[L"SumDataTable"] != nullptr) {
                __super::Tables->Add((gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable(ds->Tables[L"SumDataTable"])));
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
    
    inline ::System::Xml::Schema::XmlSchema^  SummaryDataSet::GetSchemaSerializable() {
        ::System::IO::MemoryStream^  stream = (gcnew ::System::IO::MemoryStream());
        this->WriteXmlSchema((gcnew ::System::Xml::XmlTextWriter(stream, nullptr)));
        stream->Position = 0;
        return ::System::Xml::Schema::XmlSchema::Read((gcnew ::System::Xml::XmlTextReader(stream)), nullptr);
    }
    
    inline ::System::Void SummaryDataSet::InitVars() {
        this->InitVars(true);
    }
    
    inline ::System::Void SummaryDataSet::InitVars(::System::Boolean initTable) {
        this->tableSumDataTable = (cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  >(__super::Tables[L"SumDataTable"]));
        if (initTable == true) {
            if (this->tableSumDataTable != nullptr) {
                this->tableSumDataTable->InitVars();
            }
        }
    }
    
    inline ::System::Void SummaryDataSet::InitClass() {
        this->DataSetName = L"SummaryDataSet";
        this->Prefix = L"";
        this->Namespace = L"http://tempuri.org/SummaryDataSet.xsd";
        this->EnforceConstraints = true;
        this->SchemaSerializationMode = ::System::Data::SchemaSerializationMode::IncludeSchema;
        this->tableSumDataTable = (gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable());
        __super::Tables->Add(this->tableSumDataTable);
    }
    
    inline ::System::Boolean SummaryDataSet::ShouldSerializeSumDataTable() {
        return false;
    }
    
    inline ::System::Void SummaryDataSet::SchemaChanged(::System::Object^  sender, ::System::ComponentModel::CollectionChangeEventArgs^  e) {
        if (e->Action == ::System::ComponentModel::CollectionChangeAction::Remove) {
            this->InitVars();
        }
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  SummaryDataSet::GetTypedDataSetSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        MyHousekeepingBook::SummaryDataSet^  ds = (gcnew MyHousekeepingBook::SummaryDataSet());
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
    
    
    inline SummaryDataSet::SumDataTableDataTable::SumDataTableDataTable() {
        this->TableName = L"SumDataTable";
        this->BeginInit();
        this->InitClass();
        this->EndInit();
    }
    
    inline SummaryDataSet::SumDataTableDataTable::SumDataTableDataTable(::System::Data::DataTable^  table) {
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
    
    inline SummaryDataSet::SumDataTableDataTable::SumDataTableDataTable(::System::Runtime::Serialization::SerializationInfo^  info, 
                ::System::Runtime::Serialization::StreamingContext context) : 
            ::System::Data::DataTable(info, context) {
        this->InitVars();
    }
    
    inline ::System::Data::DataColumn^  SummaryDataSet::SumDataTableDataTable::日付Column::get() {
        return this->column日付;
    }
    
    inline ::System::Data::DataColumn^  SummaryDataSet::SumDataTableDataTable::入金合計Column::get() {
        return this->column入金合計;
    }
    
    inline ::System::Data::DataColumn^  SummaryDataSet::SumDataTableDataTable::出金合計Column::get() {
        return this->column出金合計;
    }
    
    inline ::System::Int32 SummaryDataSet::SumDataTableDataTable::Count::get() {
        return this->Rows->Count;
    }
    
    inline MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  SummaryDataSet::SumDataTableDataTable::default::get(::System::Int32 index) {
        return (cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  >(this->Rows[index]));
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::AddSumDataTableRow(MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  row) {
        this->Rows->Add(row);
    }
    
    inline MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  SummaryDataSet::SumDataTableDataTable::AddSumDataTableRow(
                System::DateTime 日付, System::Int32 入金合計, System::Int32 出金合計) {
        MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  rowSumDataTableRow = (cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  >(this->NewRow()));
        cli::array< ::System::Object^  >^  columnValuesArray = gcnew cli::array< ::System::Object^  >(3) {日付, 入金合計, 出金合計};
        rowSumDataTableRow->ItemArray = columnValuesArray;
        this->Rows->Add(rowSumDataTableRow);
        return rowSumDataTableRow;
    }
    
    inline ::System::Collections::IEnumerator^  SummaryDataSet::SumDataTableDataTable::GetEnumerator() {
        return this->Rows->GetEnumerator();
    }
    
    inline ::System::Data::DataTable^  SummaryDataSet::SumDataTableDataTable::Clone() {
        MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  cln = (cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  >(__super::Clone()));
        cln->InitVars();
        return cln;
    }
    
    inline ::System::Data::DataTable^  SummaryDataSet::SumDataTableDataTable::CreateInstance() {
        return (gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable());
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::InitVars() {
        this->column日付 = __super::Columns[L"日付"];
        this->column入金合計 = __super::Columns[L"入金合計"];
        this->column出金合計 = __super::Columns[L"出金合計"];
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::InitClass() {
        this->column日付 = (gcnew ::System::Data::DataColumn(L"日付", ::System::DateTime::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column日付);
        this->column入金合計 = (gcnew ::System::Data::DataColumn(L"入金合計", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column入金合計);
        this->column出金合計 = (gcnew ::System::Data::DataColumn(L"出金合計", ::System::Int32::typeid, nullptr, ::System::Data::MappingType::Element));
        __super::Columns->Add(this->column出金合計);
    }
    
    inline MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  SummaryDataSet::SumDataTableDataTable::NewSumDataTableRow() {
        return (cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  >(this->NewRow()));
    }
    
    inline ::System::Data::DataRow^  SummaryDataSet::SumDataTableDataTable::NewRowFromBuilder(::System::Data::DataRowBuilder^  builder) {
        return (gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableRow(builder));
    }
    
    inline ::System::Type^  SummaryDataSet::SumDataTableDataTable::GetRowType() {
        return MyHousekeepingBook::SummaryDataSet::SumDataTableRow::typeid;
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::OnRowChanged(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanged(e);
        {
            this->SumDataTableRowChanged(this, (gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::OnRowChanging(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowChanging(e);
        {
            this->SumDataTableRowChanging(this, (gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::OnRowDeleted(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleted(e);
        {
            this->SumDataTableRowDeleted(this, (gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::OnRowDeleting(::System::Data::DataRowChangeEventArgs^  e) {
        __super::OnRowDeleting(e);
        {
            this->SumDataTableRowDeleting(this, (gcnew MyHousekeepingBook::SummaryDataSet::SumDataTableRowChangeEvent((cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  >(e->Row)), 
                    e->Action)));
        }
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableDataTable::RemoveSumDataTableRow(MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  row) {
        this->Rows->Remove(row);
    }
    
    inline ::System::Xml::Schema::XmlSchemaComplexType^  SummaryDataSet::SumDataTableDataTable::GetTypedTableSchema(::System::Xml::Schema::XmlSchemaSet^  xs) {
        ::System::Xml::Schema::XmlSchemaComplexType^  type = (gcnew ::System::Xml::Schema::XmlSchemaComplexType());
        ::System::Xml::Schema::XmlSchemaSequence^  sequence = (gcnew ::System::Xml::Schema::XmlSchemaSequence());
        MyHousekeepingBook::SummaryDataSet^  ds = (gcnew MyHousekeepingBook::SummaryDataSet());
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
        attribute2->FixedValue = L"SumDataTableDataTable";
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
    
    
    inline SummaryDataSet::SumDataTableRow::SumDataTableRow(::System::Data::DataRowBuilder^  rb) : 
            ::System::Data::DataRow(rb) {
        this->tableSumDataTable = (cli::safe_cast<MyHousekeepingBook::SummaryDataSet::SumDataTableDataTable^  >(this->Table));
    }
    
    inline System::DateTime SummaryDataSet::SumDataTableRow::日付::get() {
        try {
            return (cli::safe_cast<::System::DateTime >(this[this->tableSumDataTable->日付Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'SumDataTable\' にある列 \'日付\' の値は DBNull です。", e));
        }
    }
    inline System::Void SummaryDataSet::SumDataTableRow::日付::set(System::DateTime value) {
        this[this->tableSumDataTable->日付Column] = value;
    }
    
    inline System::Int32 SummaryDataSet::SumDataTableRow::入金合計::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableSumDataTable->入金合計Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'SumDataTable\' にある列 \'入金合計\' の値は DBNull です。", e));
        }
    }
    inline System::Void SummaryDataSet::SumDataTableRow::入金合計::set(System::Int32 value) {
        this[this->tableSumDataTable->入金合計Column] = value;
    }
    
    inline System::Int32 SummaryDataSet::SumDataTableRow::出金合計::get() {
        try {
            return (cli::safe_cast<::System::Int32 >(this[this->tableSumDataTable->出金合計Column]));
        }
        catch (::System::InvalidCastException^ e) {
            throw (gcnew ::System::Data::StrongTypingException(L"テーブル \'SumDataTable\' にある列 \'出金合計\' の値は DBNull です。", e));
        }
    }
    inline System::Void SummaryDataSet::SumDataTableRow::出金合計::set(System::Int32 value) {
        this[this->tableSumDataTable->出金合計Column] = value;
    }
    
    inline ::System::Boolean SummaryDataSet::SumDataTableRow::Is日付Null() {
        return this->IsNull(this->tableSumDataTable->日付Column);
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableRow::Set日付Null() {
        this[this->tableSumDataTable->日付Column] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean SummaryDataSet::SumDataTableRow::Is入金合計Null() {
        return this->IsNull(this->tableSumDataTable->入金合計Column);
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableRow::Set入金合計Null() {
        this[this->tableSumDataTable->入金合計Column] = ::System::Convert::DBNull;
    }
    
    inline ::System::Boolean SummaryDataSet::SumDataTableRow::Is出金合計Null() {
        return this->IsNull(this->tableSumDataTable->出金合計Column);
    }
    
    inline ::System::Void SummaryDataSet::SumDataTableRow::Set出金合計Null() {
        this[this->tableSumDataTable->出金合計Column] = ::System::Convert::DBNull;
    }
    
    
    inline SummaryDataSet::SumDataTableRowChangeEvent::SumDataTableRowChangeEvent(MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  row, 
                ::System::Data::DataRowAction action) {
        this->eventRow = row;
        this->eventAction = action;
    }
    
    inline MyHousekeepingBook::SummaryDataSet::SumDataTableRow^  SummaryDataSet::SumDataTableRowChangeEvent::Row::get() {
        return this->eventRow;
    }
    
    inline ::System::Data::DataRowAction SummaryDataSet::SumDataTableRowChangeEvent::Action::get() {
        return this->eventAction;
    }
}
