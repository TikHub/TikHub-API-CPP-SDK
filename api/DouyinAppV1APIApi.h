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

/*
 * DouyinAppV1APIApi.h
 *
 * 
 */

#ifndef IO_TIKHUB_CLIENT_API_DouyinAppV1APIApi_H_
#define IO_TIKHUB_CLIENT_API_DouyinAppV1APIApi_H_


#include "../ApiClient.h"

#include "HttpValidationError.h"
#include "ResponseModel.h"
#include <cpprest/details/basic_types.h>


#include <boost/optional.hpp>

namespace io {
namespace tikhub {
namespace client {
namespace api {

using namespace org::openapitools::client::model;



class  DouyinAppV1APIApi 
{
public:

    explicit DouyinAppV1APIApi( std::shared_ptr<const ApiClient> apiClient );

    virtual ~DouyinAppV1APIApi();

    /// <summary>
    /// 获取指定关键词的综合搜索结果/Get comprehensive search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的综合搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 - sort_type: 0:综合排序 1:最多点赞 2:最新发布 - publish_time: 0:不限 1:最近一天 7:最近一周 183:最近半年 ### 返回: - 综合搜索结果  # [English] ### Purpose: - Get comprehensive search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. - sort_type: 0: Comprehensive sorting 1: Most likes 2: Latest release - publish_time: 0: Unlimited 1: Last day 7: Last week 183: Last half year ### Return: - Comprehensive search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20 sort_type &#x3D; 0 publish_time &#x3D; 0
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    /// <param name="sortType">排序类型/Sort type (optional, default to 0)</param>
    /// <param name="publishTime">发布时间/Publish time (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchGeneralSearchResultApiV1DouyinAppV1FetchGeneralSearchResultGet(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count,
        boost::optional<int32_t> sortType,
        boost::optional<int32_t> publishTime
    ) const;
    /// <summary>
    /// 获取指定关键词的综合搜索结果/Get comprehensive search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的综合搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 - sort_type: 0:综合排序 1:最多点赞 2:最新发布 - publish_time: 0:不限 1:最近一天 7:最近一周 183:最近半年 ### 返回: - 综合搜索结果  # [English] ### Purpose: - Get comprehensive search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. - sort_type: 0: Comprehensive sorting 1: Most likes 2: Latest release - publish_time: 0: Unlimited 1: Last day 7: Last week 183: Last half year ### Return: - Comprehensive search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20 sort_type &#x3D; 0 publish_time &#x3D; 0
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    /// <param name="sortType">排序类型/Sort type (optional, default to 0)</param>
    /// <param name="publishTime">发布时间/Publish time (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchGeneralSearchResultApiV1DouyinAppV1FetchGeneralSearchResultGet_0(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count,
        boost::optional<int32_t> sortType,
        boost::optional<int32_t> publishTime
    ) const;
    /// <summary>
    /// 获取指定话题的详情数据/Get details of specified hashtag
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定话题的详情数据 ### 参数: - ch_id: 话题id ### 返回: - 话题详情数据  # [English] ### Purpose: - Get details of specified hashtag ### Parameters: - ch_id: Hashtag id ### Return: - Hashtag details data  # [示例/Example] ch_id &#x3D; 1575791821492238
    /// </remarks>
    /// <param name="chId">话题id/Hashtag id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHashtagDetailApiV1DouyinAppV1FetchHashtagDetailGet(
        int32_t chId
    ) const;
    /// <summary>
    /// 获取指定话题的详情数据/Get details of specified hashtag
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定话题的详情数据 ### 参数: - ch_id: 话题id ### 返回: - 话题详情数据  # [English] ### Purpose: - Get details of specified hashtag ### Parameters: - ch_id: Hashtag id ### Return: - Hashtag details data  # [示例/Example] ch_id &#x3D; 1575791821492238
    /// </remarks>
    /// <param name="chId">话题id/Hashtag id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHashtagDetailApiV1DouyinAppV1FetchHashtagDetailGet_0(
        int32_t chId
    ) const;
    /// <summary>
    /// 获取指定关键词的话题搜索结果/Get hashtag search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的话题搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 话题搜索结果  # [English] ### Purpose: - Get hashtag search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Hashtag search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHashtagSearchResultApiV1DouyinAppV1FetchHashtagSearchResultGet(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定关键词的话题搜索结果/Get hashtag search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的话题搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 话题搜索结果  # [English] ### Purpose: - Get hashtag search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Hashtag search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHashtagSearchResultApiV1DouyinAppV1FetchHashtagSearchResultGet_0(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定话题的作品数据/Get video list of specified hashtag
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定话题的作品数据 ### 参数: - ch_id: 话题id - cursor: 游标，用于翻页，第一页为0，第二页为第一次响应中的cursor值。 - sort_type: 0:综合排序 1:最多点赞 2:最新发布 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 话题作品数据  # [English] ### Purpose: - Get video list of specified hashtag ### Parameters: - ch_id: Hashtag id - cursor: Cursor, used for paging, the first page is 0, the second page is the cursor value in the first response. - sort_type: 0: Comprehensive sorting 1: Most likes 2: Latest release - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Hashtag video list data  # [示例/Example] ch_id &#x3D; 1575791821492238 cursor &#x3D; 0 sort_type &#x3D; 0 count &#x3D; 10
    /// </remarks>
    /// <param name="chId">话题id/Hashtag id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="sortType">排序类型/Sort type (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHashtagVideoListApiV1DouyinAppV1FetchHashtagVideoListGet(
        int32_t chId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> sortType,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定话题的作品数据/Get video list of specified hashtag
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定话题的作品数据 ### 参数: - ch_id: 话题id - cursor: 游标，用于翻页，第一页为0，第二页为第一次响应中的cursor值。 - sort_type: 0:综合排序 1:最多点赞 2:最新发布 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 话题作品数据  # [English] ### Purpose: - Get video list of specified hashtag ### Parameters: - ch_id: Hashtag id - cursor: Cursor, used for paging, the first page is 0, the second page is the cursor value in the first response. - sort_type: 0: Comprehensive sorting 1: Most likes 2: Latest release - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Hashtag video list data  # [示例/Example] ch_id &#x3D; 1575791821492238 cursor &#x3D; 0 sort_type &#x3D; 0 count &#x3D; 10
    /// </remarks>
    /// <param name="chId">话题id/Hashtag id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="sortType">排序类型/Sort type (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHashtagVideoListApiV1DouyinAppV1FetchHashtagVideoListGet_0(
        int32_t chId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> sortType,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取抖音品牌热榜具体分类数据/Get Douyin brand hot search list detail data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音品牌热榜具体分类数据 ### 参数: - category_id: 分类id ### 返回: - 品牌热搜榜具体分类数据  # [English] ### Purpose: - Get Douyin brand hot search list detail data ### Parameters: - category_id: Category id ### Return: - Hot brand search list detail data  # [示例/Example] category_id &#x3D; 10
    /// </remarks>
    /// <param name="categoryId">分类id/Category id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHotBrandSearchApiV1DouyinAppV1FetchBrandHotSearchListDetailGet(
        int32_t categoryId
    ) const;
    /// <summary>
    /// 获取抖音品牌热榜具体分类数据/Get Douyin brand hot search list detail data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音品牌热榜具体分类数据 ### 参数: - category_id: 分类id ### 返回: - 品牌热搜榜具体分类数据  # [English] ### Purpose: - Get Douyin brand hot search list detail data ### Parameters: - category_id: Category id ### Return: - Hot brand search list detail data  # [示例/Example] category_id &#x3D; 10
    /// </remarks>
    /// <param name="categoryId">分类id/Category id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHotBrandSearchApiV1DouyinAppV1FetchBrandHotSearchListDetailGet_0(
        int32_t categoryId
    ) const;
    /// <summary>
    /// 获取抖音品牌热榜分类数据/Get Douyin brand hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音品牌热榜分类数据 ### 返回: - 品牌热搜榜分类数据  # [English] ### Purpose: - Get Douyin brand hot search category data ### Return: - Hot brand search category data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHotBrandSearchCategoryApiV1DouyinAppV1FetchBrandHotSearchListGet(
    ) const;
    /// <summary>
    /// 获取抖音品牌热榜分类数据/Get Douyin brand hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音品牌热榜分类数据 ### 返回: - 品牌热搜榜分类数据  # [English] ### Purpose: - Get Douyin brand hot search category data ### Return: - Hot brand search category data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHotBrandSearchCategoryApiV1DouyinAppV1FetchBrandHotSearchListGet_0(
    ) const;
    /// <summary>
    /// 获取抖音热搜榜数据/Get Douyin hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音热搜榜数据 ### 返回: - 热搜榜数据  # [English] ### Purpose: - Get Douyin hot search list data ### Return: - Hot search list data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHotSearchListApiV1DouyinAppV1FetchHotSearchListGet(
    ) const;
    /// <summary>
    /// 获取抖音热搜榜数据/Get Douyin hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音热搜榜数据 ### 返回: - 热搜榜数据  # [English] ### Purpose: - Get Douyin hot search list data ### Return: - Hot search list data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchHotSearchListApiV1DouyinAppV1FetchHotSearchListGet_0(
    ) const;
    /// <summary>
    /// 获取抖音直播热搜榜数据/Get Douyin live hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音直播热搜榜数据 ### 返回: - 直播热搜榜数据  # [English] ### Purpose: - Get Douyin live hot search list data ### Return: - Live hot search list data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchLiveHotSearchListApiV1DouyinAppV1FetchLiveHotSearchListGet(
    ) const;
    /// <summary>
    /// 获取抖音直播热搜榜数据/Get Douyin live hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音直播热搜榜数据 ### 返回: - 直播热搜榜数据  # [English] ### Purpose: - Get Douyin live hot search list data ### Return: - Live hot search list data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchLiveHotSearchListApiV1DouyinAppV1FetchLiveHotSearchListGet_0(
    ) const;
    /// <summary>
    /// 获取指定音乐的详情数据/Get details of specified music
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定音乐的详情数据 ### 参数: - music_id: 音乐id ### 返回: - 音乐详情数据  # [English] ### Purpose: - Get details of specified music ### Parameters: - music_id: Music id ### Return: - Music details data  # [示例/Example] music_id &#x3D; \&quot;7136850194742315016\&quot;
    /// </remarks>
    /// <param name="musicId">音乐id/Music id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicDetailApiV1DouyinAppV1FetchMusicDetailGet(
        utility::string_t musicId
    ) const;
    /// <summary>
    /// 获取指定音乐的详情数据/Get details of specified music
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定音乐的详情数据 ### 参数: - music_id: 音乐id ### 返回: - 音乐详情数据  # [English] ### Purpose: - Get details of specified music ### Parameters: - music_id: Music id ### Return: - Music details data  # [示例/Example] music_id &#x3D; \&quot;7136850194742315016\&quot;
    /// </remarks>
    /// <param name="musicId">音乐id/Music id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicDetailApiV1DouyinAppV1FetchMusicDetailGet_0(
        utility::string_t musicId
    ) const;
    /// <summary>
    /// 获取抖音音乐热榜数据/Get Douyin music hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音音乐热榜数据 ### 返回: - 音乐热搜榜数据  # [English] ### Purpose: - Get Douyin music hot search list data ### Return: - Music hot search list data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicHotSearchListApiV1DouyinAppV1FetchMusicHotSearchListGet(
    ) const;
    /// <summary>
    /// 获取抖音音乐热榜数据/Get Douyin music hot search list data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取抖音音乐热榜数据 ### 返回: - 音乐热搜榜数据  # [English] ### Purpose: - Get Douyin music hot search list data ### Return: - Music hot search list data  # [示例/Example] pass
    /// </remarks>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicHotSearchListApiV1DouyinAppV1FetchMusicHotSearchListGet_0(
    ) const;
    /// <summary>
    /// 获取指定关键词的音乐搜索结果/Get music search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的音乐搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 音乐搜索结果  # [English] ### Purpose: - Get music search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Music search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicSearchResultApiV1DouyinAppV1FetchMusicSearchResultGet(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定关键词的音乐搜索结果/Get music search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的音乐搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 音乐搜索结果  # [English] ### Purpose: - Get music search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Music search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicSearchResultApiV1DouyinAppV1FetchMusicSearchResultGet_0(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定音乐的视频列表数据/Get video list of specified music
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定音乐的视频列表数据 ### 参数: - music_id: 音乐id - cursor: 游标，第一次为0，第二次为第一次响应中的cursor值。 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 音乐视频列表数据  # [English] ### Purpose: - Get video list of specified music ### Parameters: - music_id: Music id - cursor: Cursor, the first time is 0, the second time is the cursor value in the first response. - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Music video list data  # [示例/Example] music_id &#x3D; \&quot;7136850194742315016\&quot; cursor &#x3D; 0 count &#x3D; 10
    /// </remarks>
    /// <param name="musicId">音乐id/Music id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicVideoListApiV1DouyinAppV1FetchMusicVideoListGet(
        utility::string_t musicId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定音乐的视频列表数据/Get video list of specified music
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定音乐的视频列表数据 ### 参数: - music_id: 音乐id - cursor: 游标，第一次为0，第二次为第一次响应中的cursor值。 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 音乐视频列表数据  # [English] ### Purpose: - Get video list of specified music ### Parameters: - music_id: Music id - cursor: Cursor, the first time is 0, the second time is the cursor value in the first response. - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Music video list data  # [示例/Example] music_id &#x3D; \&quot;7136850194742315016\&quot; cursor &#x3D; 0 count &#x3D; 10
    /// </remarks>
    /// <param name="musicId">音乐id/Music id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchMusicVideoListApiV1DouyinAppV1FetchMusicVideoListGet_0(
        utility::string_t musicId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取单个作品数据/Get single video data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个作品数据，APP V1版本接口只能获取视频数据，无法获取图文数据，如果需要获取图文数据，请使用APP V2或者V3版本的接口。 ### 参数: - aweme_id: 作品id ### 返回: - 作品数据  # [English] ### Purpose: - Get single video data, the APP V1 version interface can only get video data, and cannot get graphic data. If you need to get graphic data, please use the interface of APP V2 or V3 version. ### Parameters: - aweme_id: Video id ### Return: - Video data  # [示例/Example] aweme_id &#x3D; \&quot;7372484719365098803\&quot;
    /// </remarks>
    /// <param name="awemeId">作品id/Video id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchOneVideoApiV1DouyinAppV1FetchOneVideoGet(
        utility::string_t awemeId
    ) const;
    /// <summary>
    /// 获取单个作品数据/Get single video data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个作品数据，APP V1版本接口只能获取视频数据，无法获取图文数据，如果需要获取图文数据，请使用APP V2或者V3版本的接口。 ### 参数: - aweme_id: 作品id ### 返回: - 作品数据  # [English] ### Purpose: - Get single video data, the APP V1 version interface can only get video data, and cannot get graphic data. If you need to get graphic data, please use the interface of APP V2 or V3 version. ### Parameters: - aweme_id: Video id ### Return: - Video data  # [示例/Example] aweme_id &#x3D; \&quot;7372484719365098803\&quot;
    /// </remarks>
    /// <param name="awemeId">作品id/Video id</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchOneVideoApiV1DouyinAppV1FetchOneVideoGet_0(
        utility::string_t awemeId
    ) const;
    /// <summary>
    /// 根据分享链接获取单个作品数据/Get single video data by sharing link
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 根据分享链接获取单个作品数据 ### 参数: - share_url: 分享链接 ### 返回: - 作品数据  # [English] ### Purpose: - Get single video data by sharing link ### Parameters: - share_url: Share link ### Return: - Video data  # [示例/Example] share_url &#x3D; \&quot;https://v.douyin.com/e3x2fjE/\&quot;
    /// </remarks>
    /// <param name="shareUrl">分享链接/Share link</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchOneVideoByShareUrlApiV1DouyinAppV1FetchOneVideoByShareUrlGet(
        utility::string_t shareUrl
    ) const;
    /// <summary>
    /// 根据分享链接获取单个作品数据/Get single video data by sharing link
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 根据分享链接获取单个作品数据 ### 参数: - share_url: 分享链接 ### 返回: - 作品数据  # [English] ### Purpose: - Get single video data by sharing link ### Parameters: - share_url: Share link ### Return: - Video data  # [示例/Example] share_url &#x3D; \&quot;https://v.douyin.com/e3x2fjE/\&quot;
    /// </remarks>
    /// <param name="shareUrl">分享链接/Share link</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchOneVideoByShareUrlApiV1DouyinAppV1FetchOneVideoByShareUrlGet_0(
        utility::string_t shareUrl
    ) const;
    /// <summary>
    /// 获取用户喜欢作品数据/Get user like video data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户喜欢作品数据 ### 参数: - sec_user_id: 用户sec_user_id - max_cursor: 最大游标，用于翻页，第一页为0，第二页为第一次响应中的max_cursor值。 - count: 最大数量 ### 返回: - 用户作品数据  # [English] ### Purpose: - Get user like video data ### Parameters: - sec_user_id: User sec_user_id - max_cursor: Maximum cursor, used for paging, the first page is 0, the second page is the max_cursor value in the first response. - count: Maximum count number ### Return: - User video data  # [示例/Example] sec_user_id &#x3D; \&quot;MS4wLjABAAAAW9FWcqS7RdQAWPd2AA5fL_ilmqsIFUCQ_Iym6Yh9_cUa6ZRqVLjVQSUjlHrfXY1Y\&quot; max_cursor &#x3D; 0 counts &#x3D; 20
    /// </remarks>
    /// <param name="secUserId">用户sec_user_id/User sec_user_id</param>
    /// <param name="maxCursor">最大游标/Maximum cursor (optional, default to 0)</param>
    /// <param name="counts">每页数量/Number per page (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserLikeVideosApiV1DouyinAppV1FetchUserLikeVideosGet(
        utility::string_t secUserId,
        boost::optional<int32_t> maxCursor,
        boost::optional<int32_t> counts
    ) const;
    /// <summary>
    /// 获取用户喜欢作品数据/Get user like video data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户喜欢作品数据 ### 参数: - sec_user_id: 用户sec_user_id - max_cursor: 最大游标，用于翻页，第一页为0，第二页为第一次响应中的max_cursor值。 - count: 最大数量 ### 返回: - 用户作品数据  # [English] ### Purpose: - Get user like video data ### Parameters: - sec_user_id: User sec_user_id - max_cursor: Maximum cursor, used for paging, the first page is 0, the second page is the max_cursor value in the first response. - count: Maximum count number ### Return: - User video data  # [示例/Example] sec_user_id &#x3D; \&quot;MS4wLjABAAAAW9FWcqS7RdQAWPd2AA5fL_ilmqsIFUCQ_Iym6Yh9_cUa6ZRqVLjVQSUjlHrfXY1Y\&quot; max_cursor &#x3D; 0 counts &#x3D; 20
    /// </remarks>
    /// <param name="secUserId">用户sec_user_id/User sec_user_id</param>
    /// <param name="maxCursor">最大游标/Maximum cursor (optional, default to 0)</param>
    /// <param name="counts">每页数量/Number per page (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserLikeVideosApiV1DouyinAppV1FetchUserLikeVideosGet_0(
        utility::string_t secUserId,
        boost::optional<int32_t> maxCursor,
        boost::optional<int32_t> counts
    ) const;
    /// <summary>
    /// 获取用户主页作品数据/Get user homepage video data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户主页作品数据 ### 参数: - sec_user_id: 用户sec_user_id - max_cursor: 最大游标，用于翻页，第一页为0，第二页为第一次响应中的max_cursor值。 - count: 最大数量 ### 返回: - 用户作品数据  # [English] ### Purpose: - Get user homepage video data ### Parameters: - sec_user_id: User sec_user_id - max_cursor: Maximum cursor, used for paging, the first page is 0, the second page is the max_cursor value in the first response. - count: Maximum count number ### Return: - User video data  # [示例/Example] sec_user_id &#x3D; \&quot;MS4wLjABAAAANXSltcLCzDGmdNFI2Q_QixVTr67NiYzjKOIP5s03CAE\&quot; max_cursor &#x3D; 0 counts &#x3D; 20
    /// </remarks>
    /// <param name="secUserId">用户sec_user_id/User sec_user_id</param>
    /// <param name="maxCursor">最大游标/Maximum cursor (optional, default to 0)</param>
    /// <param name="count">每页数量/Number per page (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserPostVideosApiV1DouyinAppV1FetchUserPostVideosGet(
        utility::string_t secUserId,
        boost::optional<int32_t> maxCursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取用户主页作品数据/Get user homepage video data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取用户主页作品数据 ### 参数: - sec_user_id: 用户sec_user_id - max_cursor: 最大游标，用于翻页，第一页为0，第二页为第一次响应中的max_cursor值。 - count: 最大数量 ### 返回: - 用户作品数据  # [English] ### Purpose: - Get user homepage video data ### Parameters: - sec_user_id: User sec_user_id - max_cursor: Maximum cursor, used for paging, the first page is 0, the second page is the max_cursor value in the first response. - count: Maximum count number ### Return: - User video data  # [示例/Example] sec_user_id &#x3D; \&quot;MS4wLjABAAAANXSltcLCzDGmdNFI2Q_QixVTr67NiYzjKOIP5s03CAE\&quot; max_cursor &#x3D; 0 counts &#x3D; 20
    /// </remarks>
    /// <param name="secUserId">用户sec_user_id/User sec_user_id</param>
    /// <param name="maxCursor">最大游标/Maximum cursor (optional, default to 0)</param>
    /// <param name="count">每页数量/Number per page (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserPostVideosApiV1DouyinAppV1FetchUserPostVideosGet_0(
        utility::string_t secUserId,
        boost::optional<int32_t> maxCursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定关键词的用户搜索结果/Get user search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的用户搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 用户搜索结果  # [English] ### Purpose: - Get user search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. ### Return: - User search results  # [示例/Example] keyword &#x3D; \&quot;动漫\&quot; offset &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserSearchResultApiV1DouyinAppV1FetchUserSearchResultGet(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定关键词的用户搜索结果/Get user search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的用户搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 用户搜索结果  # [English] ### Purpose: - Get user search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. ### Return: - User search results  # [示例/Example] keyword &#x3D; \&quot;动漫\&quot; offset &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchUserSearchResultApiV1DouyinAppV1FetchUserSearchResultGet_0(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取单个视频评论数据/Get single video comments data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频评论数据 ### 参数: - aweme_id: 作品id - cursor: 游标，用于翻页，第一页为0，第二页为第一次响应中的cursor值。 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 评论数据  # [English] ### Purpose: - Get single video comments data ### Parameters: - aweme_id: Video id - cursor: Cursor, used for paging, the first page is 0, the second page is the cursor value in the first response. - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Comments data  # [示例/Example] aweme_id &#x3D; \&quot;7372484719365098803\&quot; cursor &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="awemeId">作品id/Video id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchVideoCommentsApiV1DouyinAppV1FetchVideoCommentsGet(
        utility::string_t awemeId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取单个视频评论数据/Get single video comments data
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取单个视频评论数据 ### 参数: - aweme_id: 作品id - cursor: 游标，用于翻页，第一页为0，第二页为第一次响应中的cursor值。 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 评论数据  # [English] ### Purpose: - Get single video comments data ### Parameters: - aweme_id: Video id - cursor: Cursor, used for paging, the first page is 0, the second page is the cursor value in the first response. - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Comments data  # [示例/Example] aweme_id &#x3D; \&quot;7372484719365098803\&quot; cursor &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="awemeId">作品id/Video id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchVideoCommentsApiV1DouyinAppV1FetchVideoCommentsGet_0(
        utility::string_t awemeId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定视频的评论回复数据/Get comment replies data of specified video
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定视频的评论回复数据 ### 参数: - item_id: 作品id - comment_id: 评论id - cursor: 游标，用于翻页，第一页为0，第二页为第一次响应中的cursor值。 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 评论回复数据  # [English] ### Purpose: - Get comment replies data of specified video ### Parameters: - item_id: Video id - comment_id: Comment id - cursor: Cursor, used for paging, the first page is 0, the second page is the cursor value in the first response. - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Comment replies data  # [示例/Example] aweme_id &#x3D; \&quot;7354666303006723354\&quot; comment_id &#x3D; \&quot;7354669356632638218\&quot; cursor &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="itemId">作品id/Video id</param>
    /// <param name="commentId">评论id/Comment id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchVideoCommentsReplyApiV1DouyinAppV1FetchVideoCommentRepliesGet(
        utility::string_t itemId,
        utility::string_t commentId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定视频的评论回复数据/Get comment replies data of specified video
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定视频的评论回复数据 ### 参数: - item_id: 作品id - comment_id: 评论id - cursor: 游标，用于翻页，第一页为0，第二页为第一次响应中的cursor值。 - count: 数量，请保持默认，否则会出现BUG。 ### 返回: - 评论回复数据  # [English] ### Purpose: - Get comment replies data of specified video ### Parameters: - item_id: Video id - comment_id: Comment id - cursor: Cursor, used for paging, the first page is 0, the second page is the cursor value in the first response. - count: Number Please keep the default, otherwise there will be BUG. ### Return: - Comment replies data  # [示例/Example] aweme_id &#x3D; \&quot;7354666303006723354\&quot; comment_id &#x3D; \&quot;7354669356632638218\&quot; cursor &#x3D; 0 count &#x3D; 20
    /// </remarks>
    /// <param name="itemId">作品id/Video id</param>
    /// <param name="commentId">评论id/Comment id</param>
    /// <param name="cursor">游标/Cursor (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchVideoCommentsReplyApiV1DouyinAppV1FetchVideoCommentRepliesGet_0(
        utility::string_t itemId,
        utility::string_t commentId,
        boost::optional<int32_t> cursor,
        boost::optional<int32_t> count
    ) const;
    /// <summary>
    /// 获取指定关键词的视频搜索结果/Get video search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的视频搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 - sort_type: 0:综合排序 1:最多点赞 2:最新发布 - publish_time: 0:不限 1:最近一天 7:最近一周 183:最近半年 ### 返回: - 视频搜索结果  # [English] ### Purpose: - Get video search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. - sort_type: 0: Comprehensive sorting 1: Most likes 2: Latest release - publish_time: 0: Unlimited 1: Last day 7: Last week 183: Last half year ### Return: - Video search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20 sort_type &#x3D; 0 publish_time &#x3D; 0
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    /// <param name="sortType">排序类型/Sort type (optional, default to 0)</param>
    /// <param name="publishTime">发布时间/Publish time (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchVideoSearchResultApiV1DouyinAppV1FetchVideoSearchResultGet(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count,
        boost::optional<int32_t> sortType,
        boost::optional<int32_t> publishTime
    ) const;
    /// <summary>
    /// 获取指定关键词的视频搜索结果/Get video search results of specified keywords
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定关键词的视频搜索结果 ### 参数: - keyword: 关键词 - offset: 偏移量 - count: 数量，请保持默认，否则会出现BUG。 - sort_type: 0:综合排序 1:最多点赞 2:最新发布 - publish_time: 0:不限 1:最近一天 7:最近一周 183:最近半年 ### 返回: - 视频搜索结果  # [English] ### Purpose: - Get video search results of specified keywords ### Parameters: - keyword: Keyword - offset: Offset - count: Number Please keep the default, otherwise there will be BUG. - sort_type: 0: Comprehensive sorting 1: Most likes 2: Latest release - publish_time: 0: Unlimited 1: Last day 7: Last week 183: Last half year ### Return: - Video search results  # [示例/Example] keyword &#x3D; \&quot;中华娘\&quot; offset &#x3D; 0 count &#x3D; 20 sort_type &#x3D; 0 publish_time &#x3D; 0
    /// </remarks>
    /// <param name="keyword">关键词/Keyword</param>
    /// <param name="offset">偏移量/Offset (optional, default to 0)</param>
    /// <param name="count">数量/Number (optional, default to 0)</param>
    /// <param name="sortType">排序类型/Sort type (optional, default to 0)</param>
    /// <param name="publishTime">发布时间/Publish time (optional, default to 0)</param>
    pplx::task<std::shared_ptr<ResponseModel>> fetchVideoSearchResultApiV1DouyinAppV1FetchVideoSearchResultGet_0(
        utility::string_t keyword,
        boost::optional<int32_t> offset,
        boost::optional<int32_t> count,
        boost::optional<int32_t> sortType,
        boost::optional<int32_t> publishTime
    ) const;
    /// <summary>
    /// 获取指定用户的信息/Get information of specified user
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定用户的信息 ### 参数: - sec_user_id: 用户sec_user_id ### 返回: - 用户信息  # [English] ### Purpose: - Get information of specified user ### Parameters: - sec_user_id: User sec_user_id ### Return: - User information  # [示例/Example] sec_user_id &#x3D; \&quot;MS4wLjABAAAAW9FWcqS7RdQAWPd2AA5fL_ilmqsIFUCQ_Iym6Yh9_cUa6ZRqVLjVQSUjlHrfXY1Y\&quot;
    /// </remarks>
    /// <param name="secUserId">用户sec_user_id/User sec_user_id</param>
    pplx::task<std::shared_ptr<ResponseModel>> handlerUserProfileApiV1DouyinAppV1HandlerUserProfileGet(
        utility::string_t secUserId
    ) const;
    /// <summary>
    /// 获取指定用户的信息/Get information of specified user
    /// </summary>
    /// <remarks>
    /// # [中文] ### 用途: - 获取指定用户的信息 ### 参数: - sec_user_id: 用户sec_user_id ### 返回: - 用户信息  # [English] ### Purpose: - Get information of specified user ### Parameters: - sec_user_id: User sec_user_id ### Return: - User information  # [示例/Example] sec_user_id &#x3D; \&quot;MS4wLjABAAAAW9FWcqS7RdQAWPd2AA5fL_ilmqsIFUCQ_Iym6Yh9_cUa6ZRqVLjVQSUjlHrfXY1Y\&quot;
    /// </remarks>
    /// <param name="secUserId">用户sec_user_id/User sec_user_id</param>
    pplx::task<std::shared_ptr<ResponseModel>> handlerUserProfileApiV1DouyinAppV1HandlerUserProfileGet_0(
        utility::string_t secUserId
    ) const;

protected:
    std::shared_ptr<const ApiClient> m_ApiClient;
};

}
}
}
}

#endif /* IO_TIKHUB_CLIENT_API_DouyinAppV1APIApi_H_ */

