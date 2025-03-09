/**
 * TikHub.io - Your Ultimate Social Media Data & API Marketplace
 * High-performance asynchronous Douyin(抖音) TikTok Xiaohongshu(小红书) Kuaishou(快手) Weibo(微博) Instagram YouTube(油管) Twitter(X) Captcha Solver(验证码解决器) Temp Mail(临时邮箱) API(接口).
 *
 * The version of the OpenAPI document: 1.0.0
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 4.3.1.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost.h"

namespace org {
namespace openapitools {
namespace client {
namespace model {




BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost()
{
    m_Page_num = 0;
    m_Page_numIsSet = false;
    m_Page_size = 0;
    m_Page_sizeIsSet = false;
    m_Date_window = 0;
    m_Date_windowIsSet = false;
    m_Keyword = utility::conversions::to_string_t("");
    m_KeywordIsSet = false;
}

BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::~BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost()
{
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::validate()
{
    // TODO: implement validation
}

web::json::value BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_Page_numIsSet)
    {
        val[utility::conversions::to_string_t("page_num")] = ModelBase::toJson(m_Page_num);
    }
    if(m_Page_sizeIsSet)
    {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(m_Page_size);
    }
    if(m_Date_windowIsSet)
    {
        val[utility::conversions::to_string_t("date_window")] = ModelBase::toJson(m_Date_window);
    }
    if(m_KeywordIsSet)
    {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(m_Keyword);
    }

    return val;
}

bool BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_num")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_page_num;
            ok &= ModelBase::fromJson(fieldValue, refVal_page_num);
            setPageNum(refVal_page_num);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_page_size;
            ok &= ModelBase::fromJson(fieldValue, refVal_page_size);
            setPageSize(refVal_page_size);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_window")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_window"));
        if(!fieldValue.is_null())
        {
            int32_t refVal_date_window;
            ok &= ModelBase::fromJson(fieldValue, refVal_date_window);
            setDateWindow(refVal_date_window);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyword")))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_keyword;
            ok &= ModelBase::fromJson(fieldValue, refVal_keyword);
            setKeyword(refVal_keyword);
        }
    }
    return ok;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }
    if(m_Page_numIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("page_num"), m_Page_num));
    }
    if(m_Page_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("page_size"), m_Page_size));
    }
    if(m_Date_windowIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("date_window"), m_Date_window));
    }
    if(m_KeywordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t("keyword"), m_Keyword));
    }
}

bool BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t("."))
    {
        namePrefix += utility::conversions::to_string_t(".");
    }

    if(multipart->hasContent(utility::conversions::to_string_t("page_num")))
    {
        int32_t refVal_page_num;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("page_num")), refVal_page_num );
        setPageNum(refVal_page_num);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("page_size")))
    {
        int32_t refVal_page_size;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("page_size")), refVal_page_size );
        setPageSize(refVal_page_size);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("date_window")))
    {
        int32_t refVal_date_window;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("date_window")), refVal_date_window );
        setDateWindow(refVal_date_window);
    }
    if(multipart->hasContent(utility::conversions::to_string_t("keyword")))
    {
        utility::string_t refVal_keyword;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t("keyword")), refVal_keyword );
        setKeyword(refVal_keyword);
    }
    return ok;
}

int32_t BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::getPageNum() const
{
    return m_Page_num;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::setPageNum(int32_t value)
{
    m_Page_num = value;
    m_Page_numIsSet = true;
}

bool BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::pageNumIsSet() const
{
    return m_Page_numIsSet;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::unsetPage_num()
{
    m_Page_numIsSet = false;
}
int32_t BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::getPageSize() const
{
    return m_Page_size;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::setPageSize(int32_t value)
{
    m_Page_size = value;
    m_Page_sizeIsSet = true;
}

bool BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::pageSizeIsSet() const
{
    return m_Page_sizeIsSet;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::unsetPage_size()
{
    m_Page_sizeIsSet = false;
}
int32_t BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::getDateWindow() const
{
    return m_Date_window;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::setDateWindow(int32_t value)
{
    m_Date_window = value;
    m_Date_windowIsSet = true;
}

bool BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::dateWindowIsSet() const
{
    return m_Date_windowIsSet;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::unsetDate_window()
{
    m_Date_windowIsSet = false;
}
utility::string_t BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::getKeyword() const
{
    return m_Keyword;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::setKeyword(const utility::string_t& value)
{
    m_Keyword = value;
    m_KeywordIsSet = true;
}

bool BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::keywordIsSet() const
{
    return m_KeywordIsSet;
}

void BodyFetchHotTotalHighSearchListApiV1DouyinBillboardFetchHotTotalHighSearchListPost::unsetKeyword()
{
    m_KeywordIsSet = false;
}
}
}
}
}


