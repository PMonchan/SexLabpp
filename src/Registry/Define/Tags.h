#pragma once

namespace Registry
{
	enum class Tag : uint64_t
	{
		SixtyNine = 1ULL << 0,
		Aggressive = 1ULL << 1,
		Anal = 1ULL << 2,
		Asphyxiation = 1ULL << 3,
		Blowjob = 1ULL << 4,
		Boobjob = 1ULL << 5,
		Cowgirl = 1ULL << 6,
		Cunnilingius = 1ULL << 7,
		Deepthroat = 1ULL << 8,
		Doggy = 1ULL << 9,
		DoublePenetration = 1ULL << 10,
		Feet = 1ULL << 11,
		Femdom = 1ULL << 12,
		Footjob = 1ULL << 13,
		Forced = 1ULL << 14,
		Gay = 1ULL << 15,
		Handjob = 1ULL << 16,
		LeadIn = 1ULL << 17,
		Lesbian = 1ULL << 18,
		Masturbation = 1ULL << 19,
		Missionary = 1ULL << 20,
		Oral = 1ULL << 21,
		Penetration = 1ULL << 22,
		ReverseCowgirl = 1ULL << 23,
		Spitroast = 1ULL << 24,
		TriplePenetration = 1ULL << 25,
		Vaginal = 1ULL << 26,
		Facesitting = 1ULL << 27,
		Maledom = 1ULL << 28,
		Dominant = 1ULL << 29,

		Hugging = 1ULL << 40,
		Kissing = 1ULL << 41,
		Kneeling = 1ULL << 42,
		Standing = 1ULL << 43,
		Loving = 1ULL << 44,
		Lying = 1ULL << 45,
		Behind = 1ULL << 46,
		Facing = 1ULL << 47
	};
	using BaseTag = stl::enumeration<Tag, std::underlying_type<Tag>::type>;

	struct TagData
	{
		bool MatchTags(const std::vector<std::string_view>& a_match) const;

		BaseTag tag;
		std::vector<RE::BSFixedString> extra;
	};

	struct TagHandler
	{
		/// @brief If the given enumeration contains a_cmp
		/// @return -1 if a_cmp is now a base tag, 0 if the enumeration doesnt include it, 1 if it does
		static int32_t HasTag(const BaseTag& a_enumeration, const std::string_view a_cmp);

		static bool AddTag(BaseTag& a_enumeration, const std::string_view a_stringtag);
		static bool RemoveTag(BaseTag& a_enumeration, const std::string_view a_stringtag);
	};

}	 // namespace Registry
